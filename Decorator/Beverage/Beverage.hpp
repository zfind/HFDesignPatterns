#ifndef BEVERAGE_BEVERAGE_HPP
#define BEVERAGE_BEVERAGE_HPP

#include <iostream>
#include <string>

namespace HFDesignPatterns {
namespace Decorator {
namespace Beverage {

class Beverage {
protected:
    std::string description_;

protected:
    Beverage()
        :description_("Unknown") { }

    explicit Beverage(std::string description)
        :description_(std::move(description)) { }

public:

    virtual ~Beverage() = default;

    virtual std::string getDescription() const
    {
        return description_;
    }

    virtual double cost() const = 0;

};

} // Beverage
} // Decorator
} // HFDesignPatterns

#endif //BEVERAGE_BEVERAGE_HPP
