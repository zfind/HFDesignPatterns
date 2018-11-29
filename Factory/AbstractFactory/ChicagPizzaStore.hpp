#ifndef PIZZAABSTRACTFACTORY_CHICAGPIZZASTORE_HPP
#define PIZZAABSTRACTFACTORY_CHICAGPIZZASTORE_HPP

#include "PizzaIngredientFactory.hpp"
#include "NYPizzaIngredientFactory.hpp"
#include "CheesePizza.hpp"
#include "VeggiePizza.hpp"
#include "ClamPizza.hpp"
#include "PepperoniPizza.hpp"
#include "ChicagoPizzaIngredientFactory.hpp"

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class ChicagoPizzaStore : public PizzaStore {
private:
    std::shared_ptr<PizzaIngredientFactory> ingredientFactory_;
    std::string name_;

public:
    ChicagoPizzaStore()
        :name_("Chicago Style")
    {
        ingredientFactory_ = std::make_shared<ChicagoPizzaIngredientFactory>();
    }

public:
    std::unique_ptr<Pizza> createPizza(const std::string& type) const override
    {
        std::unique_ptr<Pizza> pizza;

        if (type=="cheese") {
            pizza = std::make_unique<CheesePizza>(ingredientFactory_);
            pizza->setName(name_+" Cheese Pizza");
        } else if (type=="veggie") {
            pizza = std::make_unique<VeggiePizza>(ingredientFactory_);
            pizza->setName(name_+" Veggie Pizza ");
        } else if (type=="clam") {
            pizza = std::make_unique<ClamPizza>(ingredientFactory_);
            pizza->setName(name_+" Clam Pizza");
        } else if (type=="pepperoni") {
            pizza = std::make_unique<PepperoniPizza>(ingredientFactory_);
            pizza->setName(name_+" Pepperoni Pizza");
        }

        return pizza;
    }
};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_CHICAGPIZZASTORE_HPP
