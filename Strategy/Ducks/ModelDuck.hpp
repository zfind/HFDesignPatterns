#ifndef STRATEGY_MODELDUCK_H
#define STRATEGY_MODELDUCK_H

#include "Duck.hpp"
#include "FlyNoWay.hpp"
#include "FakeQuack.hpp"

namespace HFDesignPatterns {
namespace Strategy {
namespace Ducks {

class ModelDuck : public Duck {
public:
    ModelDuck()
        :Duck(std::make_unique<FlyNoWay>(), std::make_unique<FakeQuack>()) { }

public:
    void display() const override
    {
        std::cout << "I'm a model duck" << std::endl;
    }

};

} // Ducks
} // Strategy
} // HFDesignPatterns

#endif //STRATEGY_MODELDUCK_H
