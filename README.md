# Sorting_objects_Robotic manipulator

# Description
Sorting objects by using robotic arm based on color detection using camera.

# Files
1. .py file using camera, detects the color of the object and sends the classification as serial data to the COM port to which arduino is connected.
2. .ino file contains code to receive the serail data and move the robotic manipulator based on the classification.

# Instructions
* Edit the serial port of the arduino connected and camera source in Controlling_servos_based_on_color.py.
* Whatever color threshold you want change it in Controlling_servos_based_on_color.py
* Update the arduino file according to the robotic arm movement you want.
* Upload arduino code to the microcontroller and run python file.
