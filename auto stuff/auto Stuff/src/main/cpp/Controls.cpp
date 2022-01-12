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
const int kLeftStickXAxis = 0; // GetRawAxis() give float
const int kLeftStickYAxis = 1; // GetRawAxis() give float
const int kRightStickXAxis = 4; // GetRawAxis() give float
const int kRightStickYAxis = 5; // GetRawAxis() give float
const int kDPad = 0; // GetPOV() give float



void Controls::process(){
    //setup the variables
    
    //record the current inputs
    if(autoInControl == false){
        toggleRecording = myController.GetRawButton(kYButton);
        aButton = myController.GetRawButton(kAButton);
        bButton = myController.GetRawButton(kBButton);
        xButton = myController.GetRawButton(kXButton);
        yButton = myController.GetRawButton(kYButton);
        leftBumper = myController.GetRawButton(kLeftBumper);
        rightBumper = myController.GetRawButton(kRightBumper);
        backButton = myController.GetRawButton(kBackButton);
        startButton = myController.GetRawButton(kStartButton);
        leftStickXAxis = myController.GetRawAxis(kLeftStickXAxis);
        leftStickYAxis = myController.GetRawAxis(kLeftStickYAxis);
        rightStickXAxis = myController.GetRawAxis(kRightStickXAxis);
        rightStickYAxis = myController.GetRawAxis(kRightStickYAxis);
        leftTrigger = myController.GetRawAxis(kLeftTrigger);
        rightTrigger = myController.GetRawAxis(kRightTrigger);
        dPad = myController.GetPOV(kDPad);
        //i= 1 a button, 2 b button, 3 x button, 4 y button, 5 left bumper, 6 right bumper, 7 back button, 8 start button
        bool buttons[] = {aButton, aWasPressed, bButton, bWasPressed, xButton, xWasPressed, yButton, yWasPressed, leftBumper, lbWasPressed, rightBumper,rbWasPressed, backButton, bbWasPressed, startButton, sbWasPressed};
        double axes[] = {leftStickXAxis, leftXAxisLast, leftStickYAxis, leftYAxisLast, rightStickXAxis, rightXAxisLast, rightStickYAxis, rightYAxisLast, leftTrigger, leftTriggerLast, rightTrigger, rightTriggerLast, dPad, dPadLast};
        //toggle the record inputs on and off
        if (toggleRecording == true){
            if(lastToggle == false){
                recordInputs = !recordInputs;
            }

        }
        lastToggle = toggleRecording;

        //records when each button is pressed and realeased
        for (int i = 0; i < 8; i++) {
            if(buttons[2*i] != buttons[(2*i)+1]) { //the button IS pressed and WAS NOT pressed before this loop or the button IS NOT pressed and WAS pressed before this loop
                //add that the button was toggled
            }
            if((i<=6) && (abs(axes[2*i]-axes[(2*i)+1]) >=.05)){
                // add axis, value, and time
                axes[(2*i)+1] = axes[2*i];
            }
        }

        aWasPressed = aButton;
        bWasPressed = bButton;
        xWasPressed = xButton;
        yWasPressed = yButton;
        lbWasPressed = leftBumper;
        rbWasPressed = rightBumper;
        bbWasPressed = backButton;
        sbWasPressed = startButton;

    }

}   

void Controls::reset(){
    aButton = false;
    bButton = false;
    xButton = false;
    yButton = false;
    leftBumper = false;
    rightBumper = false;
    backButton = false;
    startButton = false;
    aWasPressed = false;
    bWasPressed = false;
    xWasPressed = false;
    yWasPressed = false;
    lbWasPressed = false;
    rbWasPressed = false;
    bbWasPressed = false;
    sbWasPressed = false;
    leftStickXAxis = 0;
    leftStickYAxis = 0;
    rightStickXAxis = 0;
    rightStickYAxis = 0;
    leftTrigger = 0;
    rightTrigger = 0;
    leftXAxisLast = 0;
    leftYAxisLast = 0;
    rightXAxisLast = 0;
    rightYAxisLast = 0;
    leftTriggerLast = 0;
    rightTriggerLast = 0;
}