#ifndef SINGLETON_BOILER_HPP
#define SINGLETON_BOILER_HPP

#include <iostream>

namespace HFDesignPatterns {
namespace Singleton {
namespace Boiler {

class Boiler {
private:
    bool empty_;
    bool boiled_;

protected:
    Boiler()
        :empty_(true),
         boiled_(false) { }

public:
    Boiler(Boiler const&) = delete;
    Boiler(Boiler&&) = delete;
    Boiler& operator=(Boiler const&) = delete;
    Boiler& operator=(Boiler&&) = delete;

    static Boiler& getInstance()
    {
        static Boiler boiler;
        std::cout << "Returning instance of Boiler" << std::endl;
        return boiler;
    }

public:
    bool isEmpty() const
    {
        return empty_;
    }

    bool isBoiled() const
    {
        return boiled_;
    }

    void fill()
    {
        if (isEmpty()) {
            empty_ = false;
            empty_ = false;
        }
    }

    void drain()
    {
        if (!isEmpty() && isBoiled()) {
            empty_ = true;
        }
    }

    void boil()
    {
        if (!isEmpty() && !isBoiled()) {
            boiled_ = true;
        }
    }

};

} // Boiler
} // Singleton
} // HFDesignPatterns

#endif //SINGLETON_BOILER_HPP
