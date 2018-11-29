#ifndef PIZZAABSTRACTFACTORY_PEPPERONIPIZZA_HPP
#define PIZZAABSTRACTFACTORY_PEPPERONIPIZZA_HPP

#include <memory>
#include <iostream>
#include <utility>
#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class PepperoniPizza : public Pizza {
private:
    std::shared_ptr<PizzaIngredientFactory> ingredientFactory_;

public:
    explicit PepperoniPizza(std::shared_ptr<PizzaIngredientFactory> ingredientFactory)
        :ingredientFactory_(std::move(ingredientFactory)) { }

    void prepare() override
    {
        std::cout << "Preparing " << getName() << std::endl;
        dough_ = ingredientFactory_->createDough();
        sauce_ = ingredientFactory_->createSauce();
        cheese_ = ingredientFactory_->createCheese();
        pepperoni_ = ingredientFactory_->createPepperoni();
        if (veggies_.empty()) {
            veggies_ = ingredientFactory_->createVeggies();
        }
    }

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_PEPPERONIPIZZA_HPP
