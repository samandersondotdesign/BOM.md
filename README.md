# BOM

2 Neopixel strips, or just some LEDs | Hybrid Lab/Adafruit 

Two buttons | Hybrid Lab/Adafruit 

Hook | Hardware store

Cell pressure sensor | Already have it

Dog leash | Already have it

# Bailey's Clock Readme

A dog leash hook that tells a family when their dog was last taken out and what happened. 

## Summary

The hook will feature a two LED strips. One that shows the time since the dog did #1 and another for the last time she went #2. Each illumated LED would represent 1 hour that has passed. As time passes, the lights turn from white to yellow to red. If it has been 4 hours or under since she last did 1 or 2, the lights will be green. 4-6 hours will be yellow, and 6-10 as red. Under each strip is a button that resets the time for that strip. 

This dog leash hook will be put on the wall near the door. Because it's being displayed in the home, it should have a pleasant appearance. 

I considered having a sensor detect whether or not the leash is present, to automatically reset the time, but with the butt buttons I for 1 and 2, I do not need to know whether the leash is there.

## Component Parts

Two buttons, two neopixel strips, a metal hook, laser cut casing.

## Challenges

Displaying time in an intuitive fashion so it can be understood from afar and up close. 

## Timeline

- Week 1: Write proposal
- Week 2: Order right parts, draw device and schematic 
- Week 3: Assemble and test
- Week 4: Fix bugs
- Week 5: Present!

## End result

After programming and using a forse-sensitive resistor, I have a working prototype. My biggest challenge were in programming the sketch to detect changes from the sensor to then reset the LEDs. I also had a challenge making the sensor register the change in weight from the dog leash. I am proud that I relied very little on outside code to make the project work.
