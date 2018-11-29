#ifndef PIZZAABSTRACTFACTORY_BLACKOLIVES_HPP
#define PIZZAABSTRACTFACTORY_BLACKOLIVES_HPP

#include "Veggies.hpp"

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class BlackOlives : public Veggies {

public:
    std::string toString() const override
    {
        return "Black Olives";
    }

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_BLACKOLIVES_HPP
