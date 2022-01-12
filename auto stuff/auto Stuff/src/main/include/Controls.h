#pragma once

#include <frc/Joystick.h>
#include "frc/XboxController.h"
#include <frc/Timer.h>

class Controls {
    public:
    void process();
    void reset();
    private:
    frc::Joystick myController{0};
    frc::Timer inputTimer;

    bool autoInControl = false;

    bool recordInputs = false;
    bool lastToggle = false;

    bool toggleRecording;
    bool aButton;
    bool bButton;
    bool xButton;
    bool yButton;
    bool leftBumper;
    bool rightBumper;
    bool backButton;
    bool startButton;
    double leftStickXAxis;
    double leftStickYAxis;
    double rightStickXAxis;
    double rightStickYAxis;
    double leftTrigger;
    double rightTrigger;
    double dPad;

    bool aWasPressed = false; // A Button Was Pressed
    bool bWasPressed = false; // B Button Was Pressed
    bool xWasPressed = false; // X Button Was Pressed
    bool yWasPressed = false; // Y Button Was Pressed
    bool lbWasPressed = false; // Left Bumper Was Pressed
    bool rbWasPressed = false; // Right Bumper Was Pressed
    bool bbWasPressed = false; // Back Button Was Pressed
    bool sbWasPressed = false; // Start Button Was Pressed
    double leftXAxisLast = 0;
    double leftYAxisLast = 0;
    double rightXAxisLast = 0;
    double rightYAxisLast = 0;
    double leftTriggerLast = 0;
    double rightTriggerLast = 0;
    double dPadLast = 0;
};