This code is based on fracois doray code
```
LD_PRELOAD=liblttng-profile/.libs/liblttng-profile.so ./myapplication


java -agentpath:liblttng-profile/.libs/liblttng-profile.so -XX:+PreserveFramePointer myapplication
```

