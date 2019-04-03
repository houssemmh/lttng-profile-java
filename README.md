This code is based on fracois doray code
```

-C/C++ applicaions
LD_PRELOAD=liblttng-profile/.libs/liblttng-profile.so ./myapplication

- java applications
java -agentpath:liblttng-profile/.libs/liblttng-profile.so -XX:+PreserveFramePointer myapplication

During the execution, use https://github.com/jvm-profiling-tools/perf-map-agent to get Java symbols


```

