# STM32 Blue Pill Mouse Jiggler

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

This project creates a simple system using an STM32 Blue Pill development board to continuously move your computer's mouse cursor in random directions. It is developed using the PlatformIO IDE and the Arduino framework.


**Caution:** This project can interfere with or make your computer difficult to use. Be mindful of your intended use and environment. 

## Customization

You can customize the behavior of the mouse movements by modifying the range in the `random()` function and the duration in the `delay()` function within the `loop()` function in `src/main.cpp`:

* `random(-5, 6)`: This part determines how much the mouse cursor will move along the X and Y axes in each step. The range `-5, 6` generates a random value between -5 and 5 (inclusive). A larger range will result in faster and wider movements.
* `delay(50)`: This part sets the waiting period between mouse movements in milliseconds. A smaller value results in more frequent (and thus faster) movements, while a larger value results in less frequent (and slower) movements.

Experiment with these values to achieve the desired movement dynamics.

## Potential Enhancements

* **Button Control:** Add a feature to start/stop mouse movement with a button.
* **Smarter Movements:** Develop movement algorithms that follow specific patterns or react to objects on the screen.
* **Control via Serial Port:** Control movement parameters (speed, range, etc.) from the computer via the serial port.

Educational purposes only.

