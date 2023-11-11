# Advanced Rocket Launcher (ARL)

An 8 channel wireless launch control system designed for solid fuel small and high powered solid fuel rockets.

Control Box: The user interface for send commands to the ignition box.

Ignition Box: The remote module that directly connects to the rocket motor igniters.

---

### WARNING!
1) Rocket motors are extremely dangerous. Never wire an igniter while the Ignition Box is powered. The system is 
wireless to allow motor ignition at a safe distance.
2) Store extra motors away from wireless systems. Energy from radio waves can cause accidental spontaneous ignition!
3) Always have an antenna plugged in when the box is powered to prevent damaging the internal radio modules.

---

## Usage
WIP: manual will be published at a later date.

## Installation
This section will outline how to build and install the firmware onto the internal box microcontrollers.

### Dependencies
* [Arduino IDE](https://www.arduino.cc/en/software)

### Build Instruction
Control Box
1) Open the source code in the `src/Control` directory in the Arduino IDE
2) Connect the Arduino Uno inside the Control Box via USB
3) Compile and upload the code to the Arduino UNO

Ignition Box
1) Open the source code in the `src/Ignition` directory in the Arduino IDE
2) Connect the Arduino Uno inside the Ignition Box via USB
3) Compile and upload the code to the Arduino UNO

## License
[ISC License](LICENSE)
