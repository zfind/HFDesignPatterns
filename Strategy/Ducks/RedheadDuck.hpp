#ifndef STRATEGY_REDHEADDUCK_H
#define STRATEGY_REDHEADDUCK_H

#include "Duck.hpp"
#include "FlyNoWay.hpp"
#include "FakeQuack.hpp"

namespace HFDesignPatterns {
namespace Strategy {
namespace Ducks {

class RedheadDuck : public Duck {
public:
    RedheadDuck()
        :Duck(std::make_unique<FlyWithWings>(), std::make_unique<Quack>()) { }

public:
    void display() const override
    {
        std::cout << "I'm a real Red Headed duck" << std::endl;
    }

};

} // Ducks
} // Strategy
} // HFDesignPatterns

#endif //STRATEGY_REDHEADDUCK_H
