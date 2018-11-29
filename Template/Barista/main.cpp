#include <iostream>
#include <memory>
#include "Tea.hpp"
#include "Coffee.hpp"
#include "TeaWithHook.hpp"
#include "CoffeeWithHook.hpp"
using namespace HFDesignPatterns::Template::Barista;

int main()
{
    std::cout << "Making tea..." << std::endl;
    Tea tea;
    tea.prepareRecipe();

    std::cout << "Making coffee..." << std::endl;
    Coffee coffee;
    coffee.prepareRecipe();

    std::cout << "Making tea with hook..." << std::endl;
    TeaWithHook teaWithHook;
    teaWithHook.prepareRecipe();

    std::cout << "Making coffee with hook..." << std::endl;
    CoffeeWithHook coffeeWithHook;
    coffeeWithHook.prepareRecipe();

    return 0;
}