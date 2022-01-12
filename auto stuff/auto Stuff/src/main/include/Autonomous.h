#pragma once

#include <iostream>
#include <frc/DriverStation.h>
#include <frc/Timer.h>
#include "frc/smartdashboard/Smartdashboard.h"
#include "networktables/NetworkTable.h"
#include "networktables/NetworkTableInstance.h"
#include "networktables/NetworkTableEntry.h"

class Autonomous{
    public:
    void process();
    void reset();

    
    void recordButton(/*std::string lastInput,*/ int whichButton, double time);
    void recordAxis(int whichAxis, double time);
    void clearAuto();
    void replayAuto();

    private:

};