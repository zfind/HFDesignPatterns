#ifndef PIZZAABSTRACTFACTORY_NYPIZZAINGREDIENTFACTORY_HPP
#define PIZZAABSTRACTFACTORY_NYPIZZAINGREDIENTFACTORY_HPP

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

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class NYPizzaIngredientFactory : public PizzaIngredientFactory {
public:

    std::unique_ptr<Dough> createDough() const override
    {
        return std::make_unique<ThinCrustDough>();
    }

    std::unique_ptr<Sauce> createSauce() const override
    {
        return std::make_unique<MarinaraSauce>();
    }

    std::unique_ptr<Cheese> createCheese() const override
    {
        return std::make_unique<RegganoCheese>();
    }

    std::unique_ptr<Pepperoni> createPepperoni() const override
    {
        return std::make_unique<SlicedPepperoni>();
    }

    std::unique_ptr<Clams> createClams() const override
    {
        return std::make_unique<FreshClams>();
    }

    std::vector<std::unique_ptr<Veggies>> createVeggies() const override
    {
        std::vector<std::unique_ptr<Veggies>> veggies;
        veggies.emplace_back(std::make_unique<Garlic>());
        veggies.emplace_back(std::make_unique<Onion>());
        veggies.emplace_back(std::make_unique<Mushrooms>());
        veggies.emplace_back(std::make_unique<RedPepper>());
        return veggies;
    }

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_NYPIZZAINGREDIENTFACTORY_HPP
