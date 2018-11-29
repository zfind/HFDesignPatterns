#ifndef STRATEGY_QUACK_H
#define STRATEGY_QUACK_H

#include "QuackBehavior.hpp"

namespace HFDesignPatterns {
namespace Strategy {
namespace Ducks {

class Quack : public QuackBehavior {

public:
    void quack() const override
    {
        std::cout << "Quack" << std::endl;
    }

};

} // Ducks
} // Strategy
} // HFDesignPatterns

#endif //STRATEGY_QUACK_H
