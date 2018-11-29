#ifndef OBSERVERPATTERN_CURRENTCONDITIONSDISPLAY_H
#define OBSERVERPATTERN_CURRENTCONDITIONSDISPLAY_H

#include <iostream>
#include "DisplayElement.hpp"

namespace HFDesignPatterns {
namespace Observer {
namespace WeatherStation {

class CurrentConditionsDisplay : public DisplayElement {
private:
    WeatherData* weatherData_;
    float temperature_;
    float humidity_;

public:

    explicit CurrentConditionsDisplay(WeatherData* weatherData)
        :weatherData_(weatherData),
         temperature_(0.f),
         humidity_(0.f)
    {
        weatherData_->registerObserver(this);
    }

    ~CurrentConditionsDisplay() override
    {
        weatherData_->removeObserver(this);
        std::cout << "[CurrentConditionsDisplay]\tRemoved" << std::endl;
    }

    void fieldChanged(WeatherData& source, const std::string& fieldName) override
    {
        if (fieldName=="temperature") {
            std::cout << "[CurrentConditionsDisplay]\t" << "WeatherData's " << fieldName << " has changed to " << source.getField(fieldName) << std::endl;
            temperature_ = weatherData_->getTemperature();
        } else if (fieldName=="humidity") {
            std::cout << "[CurrentConditionsDisplay]\t" << "WeatherData's " << fieldName << " has changed to " << source.getField(fieldName) << std::endl;
            humidity_ = weatherData_->getHumidity();
        } else {
            return;
        }

        display();
    }

    void display() const override
    {
        std::cout.setf(std::ios::showpoint);
        std::cout.precision(3);
        std::cout << "[CurrentConditionsDisplay]\t";
        std::cout << "Current conditions: " << temperature_;
        std::cout << " F degrees and " << humidity_;
        std::cout << "% humidity" << std::endl;
    }

};

} // WeatherStation
} // Observer
} // HFDesignPatterns

#endif //OBSERVERPATTERN_CURRENTCONDITIONSDISPLAY_H
