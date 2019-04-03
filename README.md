
```
LD_PRELOAD=.libs/liblttng-profile.so ./myapplication


java -agentpath:.libs/liblttng-profile.so -XX:+PreserveFramePointer myapplication
```

