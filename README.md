# press and light

press the button to cycle around the LEDs.
- When we press the button, the contacts are connected but they bounce. This is why we have to include a delay so that it doesn't read the bounces, only the press. It happens so fast that we don't even notice it is there, but the computer will see it as a series of presses until the button settles.  
- The computer it's so fast. The Arduino used here runs at 16MHz, which means the maximum speed it can process reads is theoretically 16000 times in 1 millisecond. This is enough that the computer can catch several bounces. If we just delay 1 second we only get 1 press. We only need this in the second while loop. The bounce occurs only when contact is made. Once the contact separates, there is no bounce.


 ![breadboard setup](/otherside.jpg)

