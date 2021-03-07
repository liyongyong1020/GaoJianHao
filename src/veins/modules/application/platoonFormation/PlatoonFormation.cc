/*
 * PlatoonFormation.cc
 *
 *  Created on: 2021Äê1ÔÂ19ÈÕ
 *      Author: 98170
 */
#include "veins/modules/application/platoonFormation/PlatoonFormation.h"

using namespace veins;

Define_Module(veins::PlatoonFormation);

void PlatoonFormation::initialize(int stage)
{
    DemoBaseApplLayer::initialize(stage);

    if (stage == 1){
    traciVehicle->setSpeed(5.0);
    traciVehicle->setMaxSpeed(5.0);
    TraCICommandInterface::Vehicle firstVehicle(traci, "0.0");
    firstVehicle.changeLane('\001', 1000.0);
}
}

void PlatoonFormation::handleSelfMsg(cMessage* msg)
{
    EV<<"====================";

    TraCICommandInterface::Vehicle secondVehicle(traci, "0.1");
    TraCICommandInterface::Vehicle thirdVehicle(traci, "0.2");
    TraCICommandInterface::Vehicle forthVehicle(traci, "0.3");
    TraCICommandInterface::Vehicle fifthVehicle(traci, "0.4");
    TraCICommandInterface::Vehicle sixthVehicle(traci, "0.5");
    TraCICommandInterface::Vehicle seventhVehicle(traci, "0.6");
    TraCICommandInterface::Vehicle eighthVehicle(traci, "0.7");
    TraCICommandInterface::Vehicle ninthVehicle(traci, "0.8");
    TraCICommandInterface::Vehicle tenthVehicle(traci, "0.9");
    getSimTime = simTime();
    if(getSimTime >= 25.0)
    {
        secondVehicle.changeLane('\001', 1000.0);
        thirdVehicle.changeLane('\001', 1000.0);
        forthVehicle.changeLane('\001', 1000.0);
        fifthVehicle.changeLane('\001', 1000.0);
        sixthVehicle.changeLane('\001', 1000.0);
        seventhVehicle.changeLane('\001', 1000.0);
        eighthVehicle.changeLane('\001', 1000.0);
        ninthVehicle.changeLane('\001', 1000.0);
        tenthVehicle.changeLane('\001', 1000.0);
    }
}


