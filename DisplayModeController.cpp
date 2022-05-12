#include <Arduino.h>
#include "DisplayModeController.h"

DisplayModeController::DisplayModeController(){
    SelectionButtons[0].selectionPin = 22;
    SelectionButtons[1].selectionPin = 23;
    SelectionButtons[2].selectionPin = 24;
    SelectionButtons[3].selectionPin = 25;
    SelectionButtons[4].selectionPin = 26;

    pinMode(SelectionButtons[0].selectionPin,INPUT);
    pinMode(SelectionButtons[1].selectionPin,INPUT);
    pinMode(SelectionButtons[2].selectionPin,INPUT);
    pinMode(SelectionButtons[3].selectionPin,INPUT);
    pinMode(SelectionButtons[4].selectionPin,INPUT);

    SelectionButtons[0].ledPin = 28;
    SelectionButtons[1].ledPin = 29;
    SelectionButtons[2].ledPin = 30;
    SelectionButtons[3].ledPin = 31;
    SelectionButtons[4].ledPin = 32;

    pinMode(SelectionButtons[0].ledPin,OUTPUT);
    pinMode(SelectionButtons[1].ledPin,OUTPUT);
    pinMode(SelectionButtons[2].ledPin,OUTPUT);
    pinMode(SelectionButtons[3].ledPin,OUTPUT);
    pinMode(SelectionButtons[4].ledPin,OUTPUT);

    lastDisplayState = 0;
}

int DisplayModeController::GetState(){
    bool myButtonState = LOW;

    for (int i = 0; i < 5; i++){
        selectionButton myButton = SelectionButtons[i];
        myButtonState = digitalRead(myButton.selectionPin);
        if (myButtonState != myButton.lastButtonState && myButtonState == HIGH){
            myButton.lastButtonState = HIGH;
            digitalWrite(myButton.ledPin, HIGH);
            lastDisplayState = i;
            return i;
            //break;
        }
    }
}

bool DisplayModeController::GetButtonState(selectionButton btn){

}