#ifndef PIZZAABSTRACTFACTORY_SLICEDPEPPERONI_HPP
#define PIZZAABSTRACTFACTORY_SLICEDPEPPERONI_HPP

#include <string>
#include "Pepperoni.hpp"

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class SlicedPepperoni : public Pepperoni {

public:
    std::string toString() override
    {
        return "Sliced Pepperoni";
    }

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_SLICEDPEPPERONI_HPP
