#include <xArmServoController.h>

// Initialize the xArmServoController
// For ESP32, we can use Serial2 (UART2)
HardwareSerial MySerial(2);

// Create an instance of the controller in LeArm mode
xArmServoController myArm = xArmServoController(LeArm, MySerial);

void setup() {
  // Initialize serial communication with the LSC-6 from ESP32
  MySerial.begin(9600, SERIAL_8N1, 16, 17);  // RX = GPIO16, TX = GPIO17

  // Optionally initialize Serial of ESP32 for debugging
  Serial.begin(115200);
  while (!Serial) {
    ; // Wait for Serial port to be available
  }

  // Define servo positions
  xArmServo home[] = {
    {1, 1500},
    {2, 1500},
    {3, 1500},
    {4, 1500},
    {5, 1500},
    {6, 500}
  };

  // Move servos to home position
  myArm.setPosition(home, 6, 2000, true);
  delay(100);
}

void loop() {
  // Your code here
}
