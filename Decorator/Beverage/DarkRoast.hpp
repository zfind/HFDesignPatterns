#ifndef BEVERAGE_DARKROAST_HPP
#define BEVERAGE_DARKROAST_HPP

#include "Beverage.hpp"

namespace HFDesignPatterns {
namespace Decorator {
namespace Beverage {

class DarkRoast : public Beverage {
public:
    DarkRoast()
        :Beverage("Dark Roast Coffee") { }

    double cost() const override
    {
        return 0.99;
    }

};

} // Beverage
} // Decorator
} // HFDesignPatterns

#endif //BEVERAGE_DARKROAST_HPP
