#ifndef PIZZAABSTRACTFACTORY_FROZENCLAMS_HPP
#define PIZZAABSTRACTFACTORY_FROZENCLAMS_HPP

#include <string>
#include "Clams.hpp"

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class FrozenClams : public Clams {

public:
    std::string toString() override
    {
        return "Frozen Clams";
    }

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_FROZENCLAMS_HPP
