#ifndef BEVERAGE_HOUSEBLEND_HPP
#define BEVERAGE_HOUSEBLEND_HPP

#include "Beverage.hpp"

namespace HFDesignPatterns {
namespace Decorator {
namespace Beverage {

class HouseBlend : public Beverage {
public:
    HouseBlend()
        :Beverage("House Blend Coffee") { }

    double cost() const override
    {
        return 0.89;
    }

};

} // Beverage
} // Decorator
} // HFDesignPatterns

#endif //BEVERAGE_HOUSEBLEND_HPP
