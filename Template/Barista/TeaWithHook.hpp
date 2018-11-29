#ifndef TEMPLATE_TEAWITHHOOK_HPP
#define TEMPLATE_TEAWITHHOOK_HPP

#include <iostream>
#include "CaffeineBeverageWithHook.hpp"

namespace HFDesignPatterns {
namespace Template {
namespace Barista {

class TeaWithHook : public CaffeineBeverageWithHook {
public:
    void brew() const override
    {
        std::cout << "Steeping tea" << std::endl;
    }

    void addCondiments() const override
    {
        std::cout << "Adding lemon" << std::endl;
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
        std::cout << "Would you like lemon with your tea? (y/n)" << std::endl;
        std::cin >> answer;
        return answer;
    }

};

} // Barista
} // Template
} // HFDesignPatterns

#endif //TEMPLATE_TEAWITHHOOK_HPP
