#ifndef ADAPTER_TURKEY_HPP
#define ADAPTER_TURKEY_HPP

namespace HFDesignPatterns {
namespace Adapter {
namespace Ducks {

class Turkey {
public:
    virtual ~Turkey() = default;

    virtual void fly() const = 0;

    virtual void gobble() const = 0;

};

} // Ducks
} // Adapter
} // HFDesignPatterns

#endif //ADAPTER_TURKEY_HPP
