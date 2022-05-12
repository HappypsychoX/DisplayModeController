#include <Arduino.h>
#line 1 "c:\\Users\\jeram\\OneDrive\\Documents\\Arduino\\Sketches\\DisplayModeController\\DisplayModeController.ino"
#include "DisplayModeController.h"


/*
int ledPin = 5;
int buttonApin = 9;
int buttonBpin = 8;

byte leds = 0;
*/
int DisplayState = 0;
DisplayModeController myDisplayModeController = DisplayModeController();
#line 13 "c:\\Users\\jeram\\OneDrive\\Documents\\Arduino\\Sketches\\DisplayModeController\\DisplayModeController.ino"
void setup();
#line 18 "c:\\Users\\jeram\\OneDrive\\Documents\\Arduino\\Sketches\\DisplayModeController\\DisplayModeController.ino"
void loop();
#line 13 "c:\\Users\\jeram\\OneDrive\\Documents\\Arduino\\Sketches\\DisplayModeController\\DisplayModeController.ino"
void setup() 
{
  
}

void loop() 
{
  DisplayState = myDisplayModeController.GetState();
}
