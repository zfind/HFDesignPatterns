#ifndef PIZZAABSTRACTFACTORY_FRESHCLAMS_HPP
#define PIZZAABSTRACTFACTORY_FRESHCLAMS_HPP

#include <string>
#include "Clams.hpp"

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class FreshClams : public Clams {

public:
    std::string toString() override
    {
        return "Fresh Clams";
    }

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_FRESHCLAMS_HPP
