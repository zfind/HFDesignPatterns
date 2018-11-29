#ifndef OBSERVERPATTERN_FORECASTDISPLAY_H
#define OBSERVERPATTERN_FORECASTDISPLAY_H

#include <iostream>
#include "DisplayElement.hpp"

namespace HFDesignPatterns {
namespace Observer {
namespace WeatherStation {

class ForecastDisplay : public DisplayElement {
private:
    WeatherData* weatherData_;
    float currentPressure_;
    float lastPressure_;

public:

    explicit ForecastDisplay(WeatherData* weatherData)
        :weatherData_(weatherData),
         currentPressure_(29.92f),
         lastPressure_(0.f)
    {
        weatherData_->registerObserver(this);
    }

    ~ForecastDisplay() override
    {
        weatherData_->removeObserver(this);
        std::cout << "[ForecastDisplay]\tRemoved" << std::endl;
    }

    void fieldChanged(WeatherData& source, const std::string& fieldName) override
    {
        if (fieldName=="pressure") {
            std::cout << "[ForecastDisplay]\t" << "WeatherData's " << fieldName << " has changed to " << source.getField(fieldName) << std::endl;
            lastPressure_ = currentPressure_;
            currentPressure_ = weatherData_->getPressure();
        } else {
            return;
        }

        display();
    }

    void display() const override
    {
        std::cout.setf(std::ios::showpoint);
        std::cout.precision(3);
        std::cout << "[ForecastDisplay]\t";
        std::cout << "Forecast: ";
        if (currentPressure_>lastPressure_) {
            std::cout << "Improving weather on the way!";
        } else if (currentPressure_==lastPressure_) {
            std::cout << "More of the same";
        } else if (currentPressure_<lastPressure_) {
            std::cout << "Watch out for cooler, rainy weather";
        }
        std::cout << std::endl;
    }

};

} // WeatherStation
} // Observer
} // HFDesignPatterns

#endif //OBSERVERPATTERN_FORECASTDISPLAY_H
