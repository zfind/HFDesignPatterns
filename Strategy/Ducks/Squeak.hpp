#ifndef STRATEGY_SQUEAK_H
#define STRATEGY_SQUEAK_H

#include "QuackBehavior.hpp"

namespace HFDesignPatterns {
namespace Strategy {
namespace Ducks {

class Squeak : public QuackBehavior {

public:
    void quack() const override
    {
        std::cout << "Squeak" << std::endl;
    }

};

} // Ducks
} // Strategy
} // HFDesignPatterns

#endif //STRATEGY_SQUEAK_H
