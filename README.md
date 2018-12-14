# StepperArduino

StepperArduino is an Arduino function for controlling the BYJ48 stepper motor.


## Wiring

* IN1 -> Pin 7
* IN2 -> Pin 6
* IN3 -> Pin 5
* IN4 -> Pin 4

## Usage

takeStep(char dir[],int tDelay = 5)

* Argument 1: "left" or "right"
* Argument 2: Time delay for speed. Usually between 5 and 15


