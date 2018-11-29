#ifndef PIZZAABSTRACTFACTORY_MARINARASAUCE_HPP
#define PIZZAABSTRACTFACTORY_MARINARASAUCE_HPP

#include <string>
#include "Dough.hpp"
#include "Sauce.hpp"

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class MarinaraSauce : public Sauce {

public:
    std::string toString() override
    {
        return "Marinara Sauce";
    }

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_MARINARASAUCE_HPP
