#ifndef STRATEGY_MUTEQUACK_H
#define STRATEGY_MUTEQUACK_H

#include "QuackBehavior.hpp"

namespace HFDesignPatterns {
namespace Strategy {
namespace Ducks {

class MuteQuack : public QuackBehavior {

public:
    void quack() const override
    {
        std::cout << "<< Silence >>" << std::endl;
    }

};

} // Ducks
} // Strategy
} // HFDesignPatterns

#endif //STRATEGY_MUTEQUACK_H
