#line 1 "c:\\Users\\jeram\\OneDrive\\Documents\\Arduino\\Sketches\\DisplayModeController\\DisplayModeController.h"
#ifndef DisplayModeController_h
#define DisplayModeController_h

class DisplayModeController{
public:
    DisplayModeController();
    int GetState();


private:
        struct selectionButton
    {
        int selectionPin;
        int ledPin;
        bool lastButtonState;
    };

    selectionButton SelectionButtons[5];
    int buttonPins[5];
    int ledPins[5];
    int lastDisplayState;
    bool GetButtonState(selectionButton btn);
/*     int button1Pin;
    int button2Pin;
    int button3Pin;
    int button4Pin;
    int button5Pin;
 
    int led1Pin;
    int led2Pin;
    int led3Pin;
    int led4Pin;
    int led5Pin;
*/
    
};

#endif