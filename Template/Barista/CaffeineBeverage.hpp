#ifndef TEMPLATE_CAFFEINEBEVERAGE_HPP
#define TEMPLATE_CAFFEINEBEVERAGE_HPP

#include <iostream>

namespace HFDesignPatterns {
namespace Template {
namespace Barista {

class CaffeineBeverage {
public:
    virtual ~CaffeineBeverage() = default;

public:

    virtual void prepareRecipe()
    {
        boilWater();
        brew();
        pourInCup();
        addCondiments();
    }

    virtual void brew() const = 0;

    virtual void addCondiments() const = 0;

private:

    void boilWater() const
    {
        std::cout << "Boiling water..." << std::endl;
    }

    void pourInCup() const
    {
        std::cout << "Pouring in cup..." << std::endl;
    }

};

} // Barista
} // Template
} // HFDesignPatterns

#endif //TEMPLATE_CAFFEINEBEVERAGE_HPP
