# xArmServoController Arduino library

This is a fork of the servo controller library created [here](https://github.com/ccourson/xArmServoController/tree/main) because I had some problems using the original.
This version is also specific to Ardunio control only and is meant to be extensible and implement some more specific controls.
Servo controller libraries for `Lewan-Soul`/`Lobot`/`Hiwonder` xArm and LeArm 6-DOF robotic arm.

## 📂 Project Structure

- `/src` - Actual library implementation.
- `/examples` - Example arduino code that you can use.

## TTL Serial Control

The control board mounted on the base of the xArm has a 4-pin connector which provides a signal path and power to an external host controller.

![xArm 6-DOF Robotic Arm](https://i.imgur.com/tG3Fw9u.jpg)

| Pin | Description                                                                                                                                                                                                                                                            |
| --- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| GND | Power and signal ground.                                                                                                                                                                                                                                               |
| TX  | Serial TTL signal from xArm to host controller. Mark = 5VDC, Space = 0VDC.                                                                                                                                                                                             |
| RX  | - Serial TTL signal from host controller to xArm. Mark = 5VDC, Space = 0VDC.                                                                                                                                                                                           |
| 5V  | 5 Volts DC power for eternal host controller. Current rating is not yet known. In most circumstances this is left unconnected.<br>`Warning: Do not connect to an external power source. Doing so will cause the xArm to beep loudly and may damage the control board.` |


### Notes:
- **This project has not been rigirously tested on multiple different boards**. If you run into issues, please make a github issue with your setup.

## License

[MIT Open Source Initiative](https://opensource.org/licenses/MIT)
