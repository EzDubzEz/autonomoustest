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

    bool recordInputs = false;
    bool lastToggle = false;

    bool aWasPressed = false; // A Button Was Pressed
    bool bWasPressed = false; // B Button Was Pressed
    bool xWasPressed = false; // X Button Was Pressed
    bool yWasPressed = false; // Y Button Was Pressed
    bool lbWasPressed = false; // Left Bumper Was Pressed
    bool rbWasPressed = false; // Right Bumper Was Pressed
    bool bbWasPressed = false; // Back Button Was Pressed
    bool sbWasPressed = false; // Start Button Was Pressed
};