#ifndef ADAPTER_DUCK_HPP
#define ADAPTER_DUCK_HPP

namespace HFDesignPatterns {
namespace Adapter {
namespace Ducks {

class Duck {
public:
    virtual ~Duck() = default;

    virtual void fly() const = 0;

    virtual void quack() const = 0;

};

} // Ducks
} // Adapter
} // HFDesignPatterns

#endif //ADAPTER_DUCK_HPP
