#ifndef PIZZAABSTRACTFACTORY_CLAMS_HPP
#define PIZZAABSTRACTFACTORY_CLAMS_HPP

#include <string>

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class Clams {

public:
    virtual std::string toString() = 0;

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_CLAMS_HPP
