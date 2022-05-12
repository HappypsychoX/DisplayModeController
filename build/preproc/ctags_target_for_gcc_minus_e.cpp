# 1 "c:\\Users\\jeram\\OneDrive\\Documents\\Arduino\\Sketches\\DisplayModeController\\DisplayModeController.ino"
# 2 "c:\\Users\\jeram\\OneDrive\\Documents\\Arduino\\Sketches\\DisplayModeController\\DisplayModeController.ino" 2


/*

int ledPin = 5;

int buttonApin = 9;

int buttonBpin = 8;



byte leds = 0;

*/
# 11 "c:\\Users\\jeram\\OneDrive\\Documents\\Arduino\\Sketches\\DisplayModeController\\DisplayModeController.ino"
int DisplayState = 0;
DisplayModeController myDisplayModeController = DisplayModeController();
void setup()
{

}

void loop()
{
  DisplayState = myDisplayModeController.GetState();
}
