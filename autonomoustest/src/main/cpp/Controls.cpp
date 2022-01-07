#include "Controls.h"

// Xbox button maps
const int kAButton = 1; // GetRawButton() give bool
const int kBButton = 2; // GetRawButton() give bool
const int kXButton = 3; // GetRawButton() give bool
const int kYButton = 4; // GetRawButton() give bool
const int kLeftBumper = 5; // GetRawButton() give bool
const int kRightBumper = 6; // GetRawButton() give bool
const int kBackButton = 7; // GetRawButton() give bool
const int kStartButton = 8; // GetRawButton() give bool
const int kLeftTrigger = 2; // GetRawAxis() give float
const int kRightTrigger = 3; // GetRawAxis() give float
const int kLeftStick = 1; // GetRawAxis() give float
const int kRightStick = 5; // GetRawAxis() give float
const int kDPad = 0; // GetPOV() give float



void Controls::process(){
    //setup the variables
    bool toggleRecording;
    bool aButton;
    bool bButton;
    bool xButton;
    bool yButton;
    bool leftBumper;
    bool rightBumper;
    bool backButton;
    bool startButton;
    //record the current inputs
    toggleRecording = myController.GetRawButton(kYButton);
    aButton = myController.GetRawButton(kAButton);
    bButton = myController.GetRawButton(kBButton);
    xButton = myController.GetRawButton(kXButton);
    yButton = myController.GetRawButton(kYButton);
    leftBumper = myController.GetRawButton(kLeftBumper);
    rightBumper = myController.GetRawButton(kRightBumper);
    backButton = myController.GetRawButton(kBackButton);
    startButton = myController.GetRawButton(kStartButton);
    
    bool list[] = {aButton, aWasPressed, bButton, bWasPressed, xButton, xWasPressed, yButton, yWasPressed, leftBumper, lbWasPressed, rightBumper,rbWasPressed, backButton, bbWasPressed, startButton, sbWasPressed};
    //toggle the record inputs on and off
    if (toggleRecording == true){
        if(lastToggle == false){
            recordInputs = !recordInputs;
        }

    }
    lastToggle = toggleRecording;

    //records when each button is pressed and realeased
    for (int i = 0; i < 8; i++) {
        if(list[2*i] == true && list[(2*i)+1] == false) { //the button IS pressed and WAS NOT pressed before this loop
            //add that the button was pressed at current time
        }
        if(list[2*i] == false && list[(2*i)+1] == true) { //the button IS NOT pressed and WAS pressed before this loop
            // add that button was released at current time
        }
    }
    

}   