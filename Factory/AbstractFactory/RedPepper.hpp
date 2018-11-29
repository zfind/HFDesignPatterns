#ifndef PIZZAABSTRACTFACTORY_REDPEPPER_HPP
#define PIZZAABSTRACTFACTORY_REDPEPPER_HPP

#include "Veggies.hpp"

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class RedPepper : public Veggies {

public:
    std::string toString() const override
    {
        return "Red Pepper";
    }

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_REDPEPPER_HPP
