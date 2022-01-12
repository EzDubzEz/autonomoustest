#include "Autonomous.h"

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string.h>


void Autonomous::process(){
// hi
// hello
}

void Autonomous::reset(){

}

void Autonomous::recordButton(int whichButton, double time){
    std::ofstream AutoButtonsFile("autobuttons.txt", std::fstream::app);
    AutoButtonsFile << std::to_string(whichButton)+","+std::to_string(time);
    AutoButtonsFile.close();
}

void Autonomous::recordAxis(int whichAxis, double time){
    std::ofstream AutoAxesFile("autoaxes.txt", std::fstream::app);
    AutoAxesFile << std::to_string(whichAxis)+","+std::to_string(time);
    AutoAxesFile.close();
}

void Autonomous::clearAuto(){
    std::ofstream AutoButtonsFile("autobuttons.txt");
    AutoButtonsFile << "";
    AutoButtonsFile.close();
    std::ofstream AutoAxesFile("autoaxes.txt");
    AutoAxesFile << "";
    AutoAxesFile.close();
}

void Autonomous::replayAuto(){
    std::string buttonsString;
    std::vector<int> buttonsInt;
    std::ifstream AutoButtonsFile("autobuttons.txt");
    while(getline(AutoButtonsFile, buttonsString)){
        //buttonsInt.push_back(buttonsString.substr(0,1));
    }
    AutoButtonsFile.close();
    std::string axesString;
    std::vector<double> axesDouble;
    std::ifstream AutoAxesFile("autoaxes.txt");
    while(getline(AutoAxesFile, axesString)){

    }
    AutoAxesFile.close();
}