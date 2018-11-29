#ifndef ADAPTER_TURKEYADAPTER_HPP
#define ADAPTER_TURKEYADAPTER_HPP

#include <iostream>
#include <memory>
#include "Duck.hpp"
#include "Turkey.hpp"

namespace HFDesignPatterns {
namespace Adapter {
namespace Ducks {

class TurkeyAdapter : public Duck {
private:
    std::unique_ptr<Turkey> turkey_;

public:
    explicit TurkeyAdapter(std::unique_ptr<Turkey> turkey)
            :turkey_(std::move(turkey)) { }

    void fly() const override
    {
        for (int i = 0; i<5; i++) {
            turkey_->fly();
        }
    }

    void quack() const override
    {
        turkey_->gobble();
    }
};

} // Ducks
} // Adapter
} // HFDesignPatterns

#endif //ADAPTER_TURKEYADAPTER_HPP
