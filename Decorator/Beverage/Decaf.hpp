#ifndef BEVERAGE_DECAF_HPP
#define BEVERAGE_DECAF_HPP

#include "Beverage.hpp"

namespace HFDesignPatterns {
namespace Decorator {
namespace Beverage {

class Decaf : public Beverage {
public:
    Decaf()
        :Beverage("Decaf Coffee") { }

    double cost() const override
    {
        return 1.05;
    }

};

} // Beverage
} // Decorator
} // HFDesignPatterns

#endif //BEVERAGE_DECAF_HPP
