#ifndef PIZZAABSTRACTFACTORY_VEGGIEPIZZA_HPP
#define PIZZAABSTRACTFACTORY_VEGGIEPIZZA_HPP

#include <memory>
#include <iostream>
#include <utility>
#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class VeggiePizza : public Pizza {
private:
    std::shared_ptr<PizzaIngredientFactory> ingredientFactory_;

public:
    explicit VeggiePizza(std::shared_ptr<PizzaIngredientFactory> ingredientFactory)
        :ingredientFactory_(std::move(ingredientFactory)) { }

    void prepare() override
    {
        std::cout << "Preparing " << getName() << std::endl;
        dough_ = ingredientFactory_->createDough();
        sauce_ = ingredientFactory_->createSauce();
        cheese_ = ingredientFactory_->createCheese();
    }

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_VEGGIEPIZZA_HPP
