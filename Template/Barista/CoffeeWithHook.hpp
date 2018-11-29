#ifndef TEMPLATE_COFFEEWITHHOOK_HPP
#define TEMPLATE_COFFEEWITHHOOK_HPP

#include <iostream>
#include "CaffeineBeverageWithHook.hpp"

namespace HFDesignPatterns {
namespace Template {
namespace Barista {

class CoffeeWithHook : public CaffeineBeverageWithHook {
public:
    void brew() const override
    {
        std::cout << "Dripping coffee through filter..." << std::endl;
    }

    void addCondiments() const override
    {
        std::cout << "Adding sugar and milk..." << std::endl;
    }

protected:

    bool customerWantsCondiments() const override
    {
        bool result = false;
        std::string answer = getUserInput();
        if (answer.find('y')!=-1) {
            result = true;
        }
        return result;
    }

private:

    std::string getUserInput() const
    {
        std::string answer;
        std::cout << "Would you like milk and sugar with your coffee? (y/n)" << std::endl;
        std::cin >> answer;
        return answer;
    }

};

} // Barista
} // Template
} // HFDesignPatterns

#endif //TEMPLATE_COFFEEWITHHOOK_HPP
