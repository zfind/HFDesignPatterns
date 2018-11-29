#include <iostream>
#include <memory>
#include "Beverage.hpp"
#include "DarkRoast.hpp"
#include "Decaf.hpp"
#include "Espresso.hpp"
#include "HouseBlend.hpp"
#include "Milk.hpp"
#include "Mocha.hpp"
#include "Soy.hpp"
#include "Whip.hpp"

using namespace HFDesignPatterns::Decorator::Beverage;

int main()
{
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(3);

    std::unique_ptr<Beverage> beverage = std::make_unique<Espresso>();
    std::cout << beverage->getDescription()
              << " $"
              << beverage->cost()
              << std::endl;

    std::unique_ptr<Beverage> beverage2 = std::make_unique<DarkRoast>();
    beverage2 = std::make_unique<Mocha>(std::move(beverage2));
    beverage2 = std::make_unique<Mocha>(std::move(beverage2));
    beverage2 = std::make_unique<Whip>(std::move(beverage2));
    std::cout << beverage2->getDescription()
              << " $"
              << beverage2->cost()
              << std::endl;

    std::unique_ptr<Beverage> beverage3 = std::make_unique<HouseBlend>();
    beverage3 = std::make_unique<Soy>(std::move(beverage3));
    beverage3 = std::make_unique<Mocha>(std::move(beverage3));
    beverage3 = std::make_unique<Whip>(std::move(beverage3));
    std::cout << beverage3->getDescription()
              << " $"
              << beverage3->cost()
              << std::endl;

    return 0;
}