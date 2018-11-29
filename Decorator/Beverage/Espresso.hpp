#ifndef BEVERAGE_ESPRESSO_HPP
#define BEVERAGE_ESPRESSO_HPP

#include "Beverage.hpp"

namespace HFDesignPatterns {
namespace Decorator {
namespace Beverage {

class Espresso : public Beverage {
public:
    Espresso()
        :Beverage("Espresso Coffee") { }

    double cost() const override
    {
        return 1.99;
    }

};

} // Beverage
} // Decorator
} // HFDesignPatterns

#endif //BEVERAGE_ESPRESSO_HPP
