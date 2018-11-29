#ifndef PIZZAABSTRACTFACTORY_SPINACH_HPP
#define PIZZAABSTRACTFACTORY_SPINACH_HPP

#include "Veggies.hpp"

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class Spinach : public Veggies {

public:
    std::string toString() const override
    {
        return "Spinach Olives";
    }

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_SPINACH_HPP
