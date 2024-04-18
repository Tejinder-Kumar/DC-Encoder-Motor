# DC-Encoder-Motor
This Repository provide code for beginner who want to learn and understand the DC motor with encoder. 
Encoder provide Control over motor, you can make control system (closed loop) using algorithms (PID, Fuzzy control, and many more).
Without encoder motor runs in open loop.
Encoder Types: 
1. Incremental Encoder (This is all we studying in this Class). Motor may have Digital sqaure wave or Analog Square Wave output.
2. Absoluet Encoder
   
DC motor with encoder allow mico-controller to:
1. Know what direction the currently DC motor is running, (This is possible when motor has two output signals)
2. it allow micro-ccontroller to know the speed of Motor based on pulses microcontroller reading, and acurate speed controlling can be done. For example, With change of Load motor RPM chnages, but if encoder is used it speed can be monitored and ajdusted at constant for variation of load.
3. it allow micro-controller to know how many turn/positon motor has made after start, which can be used to bring motor back to Home position (useful in Self balancing robot and many more)
4. Two DC motor never had same RPM, so encoder allow micro-controller to run two motor at same speed. it is useful if you are building robot and want to move in straight line 
5. 
