#ifndef PIZZAABSTRACTFACTORY_PIZZAINGREDIENTFACTORY_HPP
#define PIZZAABSTRACTFACTORY_PIZZAINGREDIENTFACTORY_HPP

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class PizzaIngredientFactory {
public:

    virtual ~PizzaIngredientFactory() = default;

    virtual std::unique_ptr<Dough> createDough() const = 0;

    virtual std::unique_ptr<Sauce> createSauce() const = 0;

    virtual std::unique_ptr<Cheese> createCheese() const = 0;

    virtual std::unique_ptr<Pepperoni> createPepperoni() const = 0;

    virtual std::unique_ptr<Clams> createClams() const = 0;

    virtual std::vector<std::unique_ptr<Veggies>> createVeggies() const = 0;

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_PIZZAINGREDIENTFACTORY_HPP
