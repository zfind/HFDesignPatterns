#ifndef PIZZAABSTRACTFACTORY_GARLIC_HPP
#define PIZZAABSTRACTFACTORY_GARLIC_HPP

#include "Veggies.hpp"

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class Garlic : public Veggies {

public:
    std::string toString() const override
    {
        return "Garlic";
    }
};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_GARLIC_HPP
