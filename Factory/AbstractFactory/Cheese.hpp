#ifndef PIZZAABSTRACTFACTORY_CHEESE_HPP
#define PIZZAABSTRACTFACTORY_CHEESE_HPP

#include <string>

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class Cheese {

public:
    virtual std::string toString() = 0;

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_CHEESE_HPP
