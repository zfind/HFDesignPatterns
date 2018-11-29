#ifndef OBSERVERPATTERN_DISPLAYELEMENT_H
#define OBSERVERPATTERN_DISPLAYELEMENT_H

#include "WeatherData.hpp"
#include "Observer.hpp"

namespace HFDesignPatterns {
namespace Observer {
namespace WeatherStation {

class DisplayElement : public Observer<WeatherData> {
protected:
    virtual ~DisplayElement() = default;

public:
    virtual void display() const = 0;

};

} // WeatherStation
} // Observer
} // HFDesignPatterns

#endif //OBSERVERPATTERN_DISPLAYELEMENT_H
