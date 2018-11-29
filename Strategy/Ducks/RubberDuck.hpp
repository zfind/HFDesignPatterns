#ifndef STRATEGY_RUBBERDUCK_H
#define STRATEGY_RUBBERDUCK_H

#include "Duck.hpp"
#include "FlyNoWay.hpp"
#include "Squeak.hpp"

namespace HFDesignPatterns {
namespace Strategy {
namespace Ducks {

class RubberDuck : public Duck {
public:
    RubberDuck()
        :Duck(std::make_unique<FlyNoWay>(), std::make_unique<Squeak>()) { }

public:
    void display() const override
    {
        std::cout << "I'm a rubber duck" << std::endl;
    }

};

} // Ducks
} // Strategy
} // HFDesignPatterns

#endif //STRATEGY_RUBBERDUCK_H
