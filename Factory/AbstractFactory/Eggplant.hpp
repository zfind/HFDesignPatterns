#ifndef PIZZAABSTRACTFACTORY_EGGPLANT_HPP
#define PIZZAABSTRACTFACTORY_EGGPLANT_HPP

#include "Veggies.hpp"

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class Eggplant : public Veggies {

public:
    std::string toString() const override
    {
        return "Eggplant Olives";
    }

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_EGGPLANT_HPP
