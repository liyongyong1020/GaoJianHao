#pragma once

#include "veins/modules/application/ieee80211p/DemoBaseApplLayer.h"
#include "veins/modules/mobility/traci/TraCICommandInterface.h"

namespace veins {

class VEINS_API PlatoonFormation:public DemoBaseApplLayer{
public:
    void initialize(int stage) override;
    void handleSelfMsg(cMessage* msg) override;
protected:
    std::string firstCarLane;
    int32_t getIndex;
    std::string getId;
    simtime_t getSimTime;
    double firstVehAccel;
};
}
