//This DigiKeyboard Script opens a cmd window and echo 'Hello World!'

#include "DigiKeyboard.h"

void setup()
{
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.println("cmd");
  DigiKeyboard.delay(200);
  DigiKeyboard.println("echo Hello World");
}

void loop()
{
  //empty
}
