#ifndef PIZZAABSTRACTFACTORY_PIZZA_HPP
#define PIZZAABSTRACTFACTORY_PIZZA_HPP

#include <sstream>
#include <utility>
#include <vector>
#include "Dough.hpp"
#include "Sauce.hpp"
#include "Cheese.hpp"
#include "Clams.hpp"
#include "Pepperoni.hpp"
#include "Veggies.hpp"

namespace HFDesignPatterns {
namespace Factory {
namespace AbstractFactory {

class Pizza {
private:
    std::string name_;

protected:
    std::unique_ptr<Dough> dough_;
    std::unique_ptr<Sauce> sauce_;
    std::unique_ptr<Cheese> cheese_;
    std::unique_ptr<Pepperoni> pepperoni_;
    std::unique_ptr<Clams> clams_;
    std::vector<std::unique_ptr<Veggies>> veggies_;

protected:
    Pizza() = default;

public:

    std::string getName() const
    {
        return name_;
    }

    void setName(std::string name)
    {
        name_ = std::move(name);
    }

    virtual void prepare() = 0;

    virtual void bake() const
    {
        std::cout << "Bake for 25 min at 350" << std::endl;
    }

    virtual void cut() const
    {
        std::cout << "Cutting pizza in diagonal slices" << std::endl;
    }

    virtual void box() const
    {
        std::cout << "Place pizza in box" << std::endl;
    }

    std::string toString() const
    {
        std::stringstream value;
        value << "===== " << name_ << " =====" << std::endl;

        if (dough_) {
            value << dough_->toString();
            value << std::endl;
        }

        if (sauce_) {
            value << sauce_->toString();
            value << std::endl;
        }

        if (cheese_) {
            value << cheese_->toString();
            value << std::endl;
        }

        if (clams_) {
            value << clams_->toString();
            value << std::endl;
        }

        if (pepperoni_) {
            value << pepperoni_->toString();
            value << std::endl;
        }

        if (veggies_.size()!=0) {
            for (const auto& veggie : veggies_) {
                value << veggie->toString() << ", ";
            }
            value << std::endl;
        }

        return value.str();
    }

};

} // AbstractFactory
} // Factory
} // HFDesignPatterns

#endif //PIZZAABSTRACTFACTORY_PIZZA_HPP
