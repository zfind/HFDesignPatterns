#ifndef PIZZAABSTRACTFACTORY_VEGGIES_HPP
#define PIZZAABSTRACTFACTORY_VEGGIES_HPP

#include <string>

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class Veggies {
public:

    virtual ~Veggies() = default;

    virtual std::string toString() const = 0;

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_VEGGIES_HPP
