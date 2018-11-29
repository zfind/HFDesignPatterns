#ifndef TEMPLATE_CAFFEINEBEVERAGEWITHHOOK_HPP
#define TEMPLATE_CAFFEINEBEVERAGEWITHHOOK_HPP

#include <iostream>

namespace HFDesignPatterns {
namespace Template {
namespace Barista {

class CaffeineBeverageWithHook {
public:
    virtual ~CaffeineBeverageWithHook() = default;

public:

    virtual void prepareRecipe()
    {
        boilWater();
        brew();
        pourInCup();
        if (customerWantsCondiments()) {
            addCondiments();
        }
    }

    virtual void brew() const = 0;

    virtual void addCondiments() const = 0;

protected:

    virtual void boilWater() const
    {
        std::cout << "Boiling water..." << std::endl;
    }

    virtual void pourInCup() const
    {
        std::cout << "Pouring in cup..." << std::endl;
    }

    virtual bool customerWantsCondiments() const
    {
        return true;
    }

};

} // Barista
} // Template
} // HFDesignPatterns

#endif //TEMPLATE_CAFFEINEBEVERAGEWITHHOOK_HPP
