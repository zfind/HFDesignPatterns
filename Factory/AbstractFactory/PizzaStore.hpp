#ifndef PIZZAABSTRACTFACTORY_PIZZASTORE_HPP
#define PIZZAABSTRACTFACTORY_PIZZASTORE_HPP

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class PizzaStore {
protected:
    PizzaStore() = default;

public:
    virtual ~PizzaStore() = default;

    std::unique_ptr<Pizza> orderPizza(const std::string& type) const
    {
        std::unique_ptr<Pizza> pizza(createPizza(type));
        std::cout << "===== Making a " << pizza->getName() << " =====" << std::endl;
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();

        return pizza;
    }

    virtual std::unique_ptr<Pizza> createPizza(const std::string& type) const = 0;

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_PIZZASTORE_HPP
