# HighSpeedPhotography
This repo contains schematics and code for high speed photography using arduino.

I used a [piezo](https://github.com/Vogdanis/HighSpeedPhotography/blob/master/piezo.png) as the sensor, which I placed under a container with water. The piezo is sensitive enough to detect the vibrations when the droplet of water collides with the water surface and triggers the external flash. The camera has to be in bulb mode and the whole setup has to take place in a completely dark room.  

Below is the circuit I made, its an Atmega328 standalone with two optoisolators and a pushbutton. There is no need to make a circuit like this, a normal arduino uno or any other will work. 

![Atmega328 standalone](https://github.com/Vogdanis/HighSpeedPhotography/blob/master/Circuit.jpg)

![Drop1](https://github.com/Vogdanis/HighSpeedPhotography/blob/master/IMG_8423.jpg)

![Drop2](https://github.com/Vogdanis/HighSpeedPhotography/blob/master/IMG_8614.jpg)
