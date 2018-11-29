#ifndef STRATEGY_FLYROCKETPOWERED_H
#define STRATEGY_FLYROCKETPOWERED_H

#include <iostream>
#include "FlyBehavior.hpp"

namespace HFDesignPatterns {
namespace Strategy {
namespace Ducks {

class FlyRocketPowered : public FlyBehavior {
public:
    void fly() const override
    {
        std::cout << "I'm flying with a rocket" << std::endl;
    }
};

} // Ducks
} // Strategy
} // HFDesignPatterns

#endif //STRATEGY_FLYROCKETPOWERED_H
