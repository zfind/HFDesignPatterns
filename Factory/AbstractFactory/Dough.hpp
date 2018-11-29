#ifndef PIZZAABSTRACTFACTORY_DOUGH_HPP
#define PIZZAABSTRACTFACTORY_DOUGH_HPP

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class Dough {

public:
    virtual std::string toString() = 0;

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_DOUGH_HPP
