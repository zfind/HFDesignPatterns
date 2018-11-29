#ifndef OBSERVERPATTERN_OBSERVER_H
#define OBSERVERPATTERN_OBSERVER_H

#include <iostream>

namespace HFDesignPatterns {
namespace Observer {
namespace WeatherStation {

template<typename T>
class Observer {
public:

    virtual void fieldChanged(T& source, const std::string& fieldName) = 0;

};

} // WeatherStation
} // Observer
} // HFDesignPatterns

#endif //OBSERVERPATTERN_OBSERVER_H
