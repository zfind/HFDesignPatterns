#ifndef PIZZAABSTRACTFACTORY_CLAMPIZZA_HPP
#define PIZZAABSTRACTFACTORY_CLAMPIZZA_HPP

#include <memory>
#include <iostream>
#include <utility>
#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class ClamPizza : public Pizza {
private:
    std::shared_ptr<PizzaIngredientFactory> ingredientFactory_;

public:
    explicit ClamPizza(std::shared_ptr<PizzaIngredientFactory> ingredientFactory)
        :ingredientFactory_(std::move(ingredientFactory)) { }

    void prepare() override
    {
        std::cout << "Preparing " << getName() << std::endl;
        dough_ = ingredientFactory_->createDough();
        sauce_ = ingredientFactory_->createSauce();
        cheese_ = ingredientFactory_->createCheese();
        clams_ = ingredientFactory_->createClams();
    }

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_CLAMPIZZA_HPP
