#ifndef PIZZAABSTRACTFACTORY_ONION_HPP
#define PIZZAABSTRACTFACTORY_ONION_HPP

#include "Veggies.hpp"

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class Onion : public Veggies {

public:
    std::string toString() const override
    {
        return "Onion";
    }

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_ONION_HPP
