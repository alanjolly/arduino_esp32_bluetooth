// Source code for the ESP32 Bluetooth HID keyboard remote control

#include <BleKeyboard.h>

BleKeyboard keyboard;

void setup() {
  keyboard.begin();
}

void loop() {
  if (keyboard.isConnected()) {
    keyboard.write('H'); // Press 'H'
    delay(1000);
  }
}