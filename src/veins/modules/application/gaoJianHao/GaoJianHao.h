#pragma once

#include "veins/modules/application/ieee80211p/DemoBaseApplLayer.h"
#include "veins/modules/mobility/traci/TraCICommandInterface.h"

namespace veins {

class VEINS_API GaoJianHao:public DemoBaseApplLayer{
public:
    void initialize(int stage) override;

protected:

};
}
