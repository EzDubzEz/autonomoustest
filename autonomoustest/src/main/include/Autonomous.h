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

    
    void recordInput(std::string lastInput, double time);

    private:

};