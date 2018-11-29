#include <iostream>
#include <memory>
using namespace std;

#include "Pizza.hpp"
#include "PizzaStore.hpp"
#include "NYPizzaStore.hpp"
#include "ChicagPizzaStore.hpp"
using namespace HFDesignPatterns::Factory::AbstractFactory;

int main()
{
    unique_ptr<PizzaStore> nyStore = make_unique<NYPizzaStore>();
    unique_ptr<PizzaStore> chicagoStore = make_unique<ChicagoPizzaStore>();

    unique_ptr<Pizza> pizza = nyStore->orderPizza("cheese");
    std::cout << "Ethan ordered " << pizza->toString() << std::endl;

    pizza = chicagoStore->orderPizza("cheese");
    std::cout << "Joel ordered " << pizza->toString() << std::endl;

    pizza = nyStore->orderPizza("clam");
    std::cout << "Ethan ordered " << pizza->toString() << std::endl;

    pizza = chicagoStore->orderPizza("clam");
    std::cout << "Joel ordered " << pizza->toString() << std::endl;

    pizza = nyStore->orderPizza("pepperoni");
    std::cout << "Ethan ordered " << pizza->toString() << std::endl;

    pizza = chicagoStore->orderPizza("pepperoni");
    std::cout << "Joel ordered " << pizza->toString() << std::endl;

    pizza = nyStore->orderPizza("veggie");
    std::cout << "Ethan ordered " << pizza->toString() << std::endl;

    pizza = chicagoStore->orderPizza("veggie");
    std::cout << "Joel ordered " << pizza->toString() << std::endl;

    return 0;
}