#ifndef PIZZAABSTRACTFACTORY_MOZZARELLACHEESE_HPP
#define PIZZAABSTRACTFACTORY_MOZZARELLACHEESE_HPP

#include <string>
#include "Cheese.hpp"

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class MozzarellaCheese : public Cheese {

public:
    std::string toString() override
    {
        return "Mozzarella Cheese";
    }

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_MOZZARELLACHEESE_HPP
