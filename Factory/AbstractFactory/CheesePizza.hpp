#ifndef PIZZAABSTRACTFACTORY_CHEESEPIZZA_HPP
#define PIZZAABSTRACTFACTORY_CHEESEPIZZA_HPP

#include <memory>
#include <iostream>
#include <utility>
#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class CheesePizza : public Pizza {
private:
    std::shared_ptr<PizzaIngredientFactory> ingredientFactory_;

public:
    explicit CheesePizza(std::shared_ptr<PizzaIngredientFactory> ingredientFactory)
    {
        ingredientFactory_ = std::move(ingredientFactory);
    }

    void prepare() override
    {
        std::cout << "Preparing " << getName() << std::endl;
        dough_ = ingredientFactory_->createDough();
        sauce_ = ingredientFactory_->createSauce();
        cheese_ = ingredientFactory_->createCheese();
        if (veggies_.empty()) {
            veggies_ = ingredientFactory_->createVeggies();
        }
    }

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_CHEESEPIZZA_HPP
