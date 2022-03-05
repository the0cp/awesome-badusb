#include "DigiKeyboard.h"

void setup()
{
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.println("cmd");
  DigiKeyboard.delay(300);
  DigiKeyboard.println("echo Hello World");
}

void loop()
{

}
