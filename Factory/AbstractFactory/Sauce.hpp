#ifndef PIZZAABSTRACTFACTORY_SAUCE_HPP
#define PIZZAABSTRACTFACTORY_SAUCE_HPP

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class Sauce {

public:
    virtual std::string toString() = 0;

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_SAUCE_HPP
