#ifndef PIZZAABSTRACTFACTORY_MUSHROOMS_HPP
#define PIZZAABSTRACTFACTORY_MUSHROOMS_HPP

#include "Veggies.hpp"

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class Mushrooms : public Veggies {

public:
    std::string toString() const override
    {
        return "Mushrooms";
    }

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_MUSHROOMS_HPP
