#ifndef STRATEGY_MALLARDDUCK_H
#define STRATEGY_MALLARDDUCK_H

#include "Duck.hpp"

namespace HFDesignPatterns {
namespace Strategy {
namespace Ducks {

class MallardDuck : public Duck {
public:
    MallardDuck()
        :Duck(std::make_unique<FlyWithWings>(), std::make_unique<Quack>()) { }

public:
    void display() const override
    {
        std::cout << "I'm mallard duck" << std::endl;
    }

};

} // Ducks
} // Strategy
} // HFDesignPatterns

#endif //STRATEGY_MALLARDDUCK_H
