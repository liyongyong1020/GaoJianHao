/*
 * GreenWave.cc
 *
 *  Created on: 2021Äê1ÔÂ11ÈÕ
 *      Author: 98170
 */

#include "veins/modules/application/greenWave/GreenWave.h"


using namespace veins;

Define_Module(veins::GreenWave);

void GreenWave::initialize(int stage)
{
    DemoBaseApplLayer::initialize(stage);

    if (stage == 1) {
        beaconStart = par("beaconStart");
        sendBeaconsAtSpecificTime = par("sendBeaconsAtSpecificTime").boolValue();

        if (par("avoidBeaconSynchronization").boolValue() == true) {
            simtime_t randomOffset = dblrand() * beaconInterval;
            beaconStart = beaconStart + randomOffset;

            if (sendBeaconsAtSpecificTime) {
                scheduleAt(beaconStart, sendBeaconEvt);
            }
        }
    }
}
