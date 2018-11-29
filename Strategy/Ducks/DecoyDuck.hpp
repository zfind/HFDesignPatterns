#ifndef STRATEGY_DECOYDUCK_H
#define STRATEGY_DECOYDUCK_H

#include "Duck.hpp"

namespace HFDesignPatterns {
namespace Strategy {
namespace Ducks {

class DecoyDuck : public Duck {

public:
    DecoyDuck()
        :Duck(std::make_unique<FlyNoWay>(), std::make_unique<MuteQuack>()) { }

public:
    void display() const override
    {
        std::cout << "I'm decoy duck" << std::endl;
    }

};

} // Ducks
} // Strategy
} // HFDesignPatterns

#endif //STRATEGY_DECOYDUCK_H
