#ifndef PIZZAABSTRACTFACTORY_PEPPERONI_HPP
#define PIZZAABSTRACTFACTORY_PEPPERONI_HPP

#include <string>

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class Pepperoni {

public:
    virtual std::string toString() = 0;

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_PEPPERONI_HPP
