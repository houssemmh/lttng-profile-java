AM_CPPFLAGS = -I.. -I../include -I /home/houssemmh/work/jdk8u-new/build/linux-x86_64-normal-server-fastdebug/jdk/include -I /home/houssemmh/work/jdk8u-new/build/linux-x86_64-normal-server-fastdebug/jdk//include/linux/
AM_CFLAGS = -fno-omit-frame-pointer
AM_CXXFLAGS = -fno-omit-frame-pointer

lib_LTLIBRARIES = liblttng-profile-base.la

liblttng_profile_base_la_SOURCES = \
    lttng_profile.cc \
    memory.h \
    module_abi.h \
    module_api.c \
    module_api.h \
    profiling_timer.cc \
    profiling_timer.h \
    signal_handler.cc \
    signal_handler.h \
    stacktrace.h \
    tp.cc \
    tp.h
liblttng_profile_base_la_LIBADD = \
    -ldl \
    -llttng-ust \
    -lunwind
