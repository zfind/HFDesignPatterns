#ifndef PIZZAABSTRACTFACTORY_PLUMTOMATOSAUCE_HPP
#define PIZZAABSTRACTFACTORY_PLUMTOMATOSAUCE_HPP

#include <string>
#include "Dough.hpp"
#include "Sauce.hpp"

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class PlumTomatoSauce : public Sauce {

public:
    std::string toString() override
    {
        return "Plum Tomato Sauce";
    }

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_PLUMTOMATOSAUCE_HPP
