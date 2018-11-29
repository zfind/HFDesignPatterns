#ifndef STRATEGY_FLYWITHWINGS_H
#define STRATEGY_FLYWITHWINGS_H

#include <iostream>
#include "FlyBehavior.hpp"

namespace HFDesignPatterns {
namespace Strategy {
namespace Ducks {

class FlyWithWings : public FlyBehavior {
public:

    void fly() const override
    {
        std::cout << "I'm flying!!" << std::endl;
    }

};

} // Ducks
} // Strategy
} // HFDesignPatterns

#endif //STRATEGY_FLYWITHWINGS_H
