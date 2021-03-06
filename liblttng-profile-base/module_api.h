/*
 * Copyright (C) 2015 Francois Doray <francois.doray@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; only
 * version 2.1 of the License.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 *
 * Inspired from https://github.com/giraldeau/perfuser, by Francis Giraldeau.
 */
#ifndef LTTNG_PROFILE_MODULE_API_H_
#define LTTNG_PROFILE_MODULE_API_H_

#include <signal.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Test if the process is registered with the kernel module.
 *
 * Return: 1 if initialized, 0 otherwise
 */
int syscall_tracker_module_registered();

/*
 * Register the current process (and all its threads) to the kernel
 * module. If already registered, then it resets the configuration.
 *
 * The signal handler may be called before this function returns. Therefore,
 * any required setup must be performed prior to registration.
 *
 * Return: 0 in case of success, error code otherwise
 */
int syscall_tracker_module_register();

/*
 * Unregister the calling process from the kernel module. The
 * previous signal handler is restored.
 *
 * Return: 0 in case of success, error code otherwise
 */
int syscall_tracker_module_unregister();

/*
 * Notifies the kernel module that an userspace stack event was generated
 * for a system call.
 *
 * Return: 0 in case of success, error code otherwise
 */
int syscall_tracker_module_stack();

#ifdef __cplusplus
}
#endif

#endif  // LTTNG_PROFILE_MODULE_API_H_
