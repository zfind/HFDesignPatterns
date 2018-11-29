#include <iostream>
#include <memory>
#include "Duck.hpp"
#include "MallardDuck.hpp"
#include "WildTurkey.hpp"
#include "TurkeyAdapter.hpp"
using namespace HFDesignPatterns::Adapter::Ducks;

static void testDuck(const Duck& duck)
{
    duck.quack();
    duck.fly();
}

int main()
{
    std::unique_ptr<Turkey> turkey = std::make_unique<WildTurkey>();
    std::cout << "Turkey says..." << std::endl;
    turkey->gobble();
    turkey->fly();

    std::unique_ptr<Duck> duck = std::make_unique<MallardDuck>();
    std::cout << "Duck says..." << std::endl;
    testDuck(*duck);

    std::unique_ptr<Duck> turkeyAdapter = std::make_unique<TurkeyAdapter>(std::move(turkey));
    std::cout << "TurkeyAdapter says..." << std::endl;
    testDuck(*turkeyAdapter);

    return 0;
}