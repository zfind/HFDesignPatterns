#ifndef PIZZAABSTRACTFACTORY_REGGANOCHEESE_HPP
#define PIZZAABSTRACTFACTORY_REGGANOCHEESE_HPP

#include <string>
#include "Cheese.hpp"

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class RegganoCheese : public Cheese {

public:
    std::string toString() override
    {
        return "Reggano Cheese";
    }

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_REGGANOCHEESE_HPP
