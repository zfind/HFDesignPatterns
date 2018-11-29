#ifndef PIZZAABSTRACTFACTORY_CHICAGOPIZZAINGREDIENTFACTORY_HPP
#define PIZZAABSTRACTFACTORY_CHICAGOPIZZAINGREDIENTFACTORY_HPP

#include <memory>
#include <vector>
#include "PizzaIngredientFactory.hpp"
#include "Dough.hpp"
#include "Veggies.hpp"
#include "ThinCrustDough.hpp"
#include "MarinaraSauce.hpp"
#include "RegganoCheese.hpp"
#include "SlicedPepperoni.hpp"
#include "FreshClams.hpp"
#include "Garlic.hpp"
#include "Onion.hpp"
#include "Mushrooms.hpp"
#include "RedPepper.hpp"
#include "ThickCrustDough.hpp"
#include "PlumTomatoSauce.hpp"
#include "MozzarellaCheese.hpp"
#include "FrozenClams.hpp"
#include "BlackOlives.hpp"
#include "Spinach.hpp"
#include "Eggplant.hpp"

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory {
public:

    std::unique_ptr<Dough> createDough() const override
    {
        return std::make_unique<ThickCrustDough>();
    }

    std::unique_ptr<Sauce> createSauce() const override
    {
        return std::make_unique<PlumTomatoSauce>();
    }

    std::unique_ptr<Cheese> createCheese() const override
    {
        return std::make_unique<MozzarellaCheese>();
    }

    std::unique_ptr<Pepperoni> createPepperoni() const override
    {
        return std::make_unique<SlicedPepperoni>();
    }

    std::unique_ptr<Clams> createClams() const override
    {
        return std::make_unique<FrozenClams>();
    }

    std::vector<std::unique_ptr<Veggies>> createVeggies() const override
    {
        std::vector<std::unique_ptr<Veggies>> veggies;
        veggies.emplace_back(std::make_unique<BlackOlives>());
        veggies.emplace_back(std::make_unique<Spinach>());
        veggies.emplace_back(std::make_unique<Eggplant>());
        return veggies;
    }

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_CHICAGOPIZZAINGREDIENTFACTORY_HPP
