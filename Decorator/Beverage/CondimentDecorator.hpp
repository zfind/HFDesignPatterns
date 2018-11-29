#ifndef BEVERAGE_CONDIMENTDECORATOR_HPP
#define BEVERAGE_CONDIMENTDECORATOR_HPP

#include <iostream>
#include <string>
#include "Beverage.hpp"

namespace HFDesignPatterns {
namespace Decorator {
namespace Beverage {

class CondimentDecorator : public Beverage {
protected:
    CondimentDecorator() = default;

public:

    ~CondimentDecorator() override = default;

    std::string getDescription() const override = 0;

};

} // Beverage
} // Decorator
} // HFDesignPatterns

#endif //BEVERAGE_CONDIMENTDECORATOR_HPP
