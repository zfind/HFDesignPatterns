#ifndef PIZZAABSTRACTFACTORY_THINCRUSTDOUGH_HPP
#define PIZZAABSTRACTFACTORY_THINCRUSTDOUGH_HPP

#include <string>
#include "Dough.hpp"

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class ThinCrustDough : public Dough {

public:
    std::string toString() override
    {
        return "Thin Crust Dough";
    }

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_THINCRUSTDOUGH_HPP
