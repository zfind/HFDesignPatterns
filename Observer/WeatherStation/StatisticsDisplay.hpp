#ifndef OBSERVERPATTERN_STATISTICSDISPLAY_H
#define OBSERVERPATTERN_STATISTICSDISPLAY_H

#include "DisplayElement.hpp"

namespace HFDesignPatterns {
namespace Observer {
namespace WeatherStation {

class StatisticsDisplay : public DisplayElement {
private:
    WeatherData* weatherData_;
    float maxTemp_;
    float minTemp_;
    float tempSum_;
    float numReadings_;

public:

    explicit StatisticsDisplay(WeatherData* weatherData)
        :weatherData_(weatherData),
         maxTemp_(0.0),
         minTemp_(200.0F),
         tempSum_(0.0),
         numReadings_(0)
    {
        weatherData_->registerObserver(this);
    }

    ~StatisticsDisplay() override
    {
        weatherData_->removeObserver(this);
        std::cout << "[StatisticsDisplay]\tRemoved" << std::endl;
    }

    void fieldChanged(WeatherData& source, const std::string& fieldName) override
    {
        if (fieldName!="temperature") {
            return;
        }

        std::cout << "[StatisticsDisplay]\t" << "WeatherData's " << fieldName << " has changed to " << source.getField(fieldName) << std::endl;

        float temperature = source.getTemperature();

        tempSum_ += temperature;
        numReadings_++;

        if (temperature>maxTemp_) {
            maxTemp_ = temperature;
        }

        if (temperature<minTemp_) {
            minTemp_ = temperature;
        }

        display();
    }

    void display() const override
    {
        std::cout.setf(std::ios::showpoint);
        std::cout.precision(3);
        std::cout << "[StatisticsDisplay]\t";
        std::cout << "Avg/Max/Min temperature = " << (tempSum_/numReadings_);
        std::cout << "/" << maxTemp_ << "/" << minTemp_ << std::endl;
    }
};

} // WeatherStation
} // Observer
} // HFDesignPatterns

#endif //OBSERVERPATTERN_STATISTICSDISPLAY_H
