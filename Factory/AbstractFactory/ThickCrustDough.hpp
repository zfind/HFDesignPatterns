#ifndef PIZZAABSTRACTFACTORY_THICKCRUSTDOUGH_HPP
#define PIZZAABSTRACTFACTORY_THICKCRUSTDOUGH_HPP

#include <string>
#include "Dough.hpp"

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class ThickCrustDough : public Dough {

public:
    std::string toString() override
    {
        return "Thick Crust Dough";
    }

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_THICKCRUSTDOUGH_HPP
