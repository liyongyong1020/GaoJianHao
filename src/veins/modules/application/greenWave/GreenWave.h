/*
 * GreenWave.h
 *
 *  Created on: 2021Äê1ÔÂ11ÈÕ
 *      Author: 98170
 */



#pragma once

#include "veins/modules/application/ieee80211p/DemoBaseApplLayer.h"

namespace veins {

class VEINS_API GreenWave : public DemoBaseApplLayer {
public:
    void initialize(int stage) override;

protected:
    simtime_t beaconStart;
    bool sendBeaconsAtSpecificTime;
};

} // namespace veins
