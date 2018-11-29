#ifndef STRATEGY_FLYNOWAY_H
#define STRATEGY_FLYNOWAY_H

#include <iostream>
#include "FlyBehavior.hpp"

namespace HFDesignPatterns {
namespace Strategy {
namespace Ducks {

class FlyNoWay : public FlyBehavior {
public:

    void fly() const override
    {
        std::cout << "Can't fly" << std::endl;
    }

};

} // Ducks
} // Strategy
} // HFDesignPatterns

#endif //STRATEGY_FLYNOWAY_H
