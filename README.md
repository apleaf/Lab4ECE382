Lab4ECE382: Etch-a-Sketch and Pong
==========

Captain Trimble checked off my Required and B functionality

##Pre Lab
![alt text](http://i62.tinypic.com/2j4sdp4.png)


###Objective:
The required objective of this lab was to modify the drawBlock function to take in an x coordinate, y coordinate, and a color. Changing the color acted as an eraser.

The B functionality for thsi lab to to make a block that bounced around the screen off of the edges.

To complete the required functionality, a "While" loop ran, which then had a series of cascading "if" statements to check if a directional button, or if the change color button was pressed.

To complete the B functionality, a "while" loop ran which then had a series of cascading "if" statements inside.  Instead of checking for a button, though, the "if" statements checked for the boundaries of the screen, and if the edge of the screen was not encountered, the ball would continue proceeding in the direction i was already heading.  if the block hit an edge, the velocity direction would change, making it appear as if it bounced off the edge.


###Debugging
For soem reason, my ball would skim the edge of the right side of the screen for a split second before reversing direction.  I tried to change teh "if" statements to rectify this, but could nto figure otu what to do.

###Testing Methodology/Results
To test my code, i ran it on the MSP430 and checked each button.  The required functionality worked as it was supposed to, leaving behind a trail of block, and when the change color button was pressed, it acted as an eraser. The bouncing ball was testedt he same way, by running it on the msp430.  The ball behaved like it was supposed to, minus the skimming problem explained above in the "debugging" section.

###Observations/Conclusions
In conclusion of the lab, its not so hard to understand what needs to be done in C.  What makes it hard is figuring out the syntax for things and writing it correctly in the C format.


Documentation:  I worked with C2C Jake Lawson and C2C Erik Thompson on the lab.  I had trouble figuring out the bouncing ball portion, and C2C Thompson showed me what I needed to change.
