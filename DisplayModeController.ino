#include "DisplayModeController.h"


/*
int ledPin = 5;
int buttonApin = 9;
int buttonBpin = 8;

byte leds = 0;
*/
int DisplayState = 0;
DisplayModeController myDisplayModeController = DisplayModeController();
void setup() 
{
  
}

void loop() 
{
  DisplayState = myDisplayModeController.GetState();
}