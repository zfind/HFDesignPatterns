#ifndef OBSERVERPATTERN_WEATHERDATA_H
#define OBSERVERPATTERN_WEATHERDATA_H

#include <list>
#include "Subject.hpp"

namespace HFDesignPatterns {
namespace Observer {
namespace WeatherStation {

class WeatherData : public Subject<WeatherData> {
private:
    float temperature_;
    float humidity_;
    float pressure_;

public:
    explicit WeatherData()
        :temperature_(0.f),
         humidity_(0.f),
         pressure_(0.f) { }

    float getField(const std::string& field_name) const
    {
        if (field_name=="temperature") {
            return temperature_;
        } else if (field_name=="pressure") {
            return pressure_;
        } else if (field_name=="humidity") {
            return humidity_;
        } else {
            return -1;
        }
    }

    float getTemperature() const
    {
        return temperature_;
    }

    void setTemperature(const float temperature)
    {
        if (this->temperature_==temperature) return;

        this->temperature_ = temperature;

        notifyObservers(*this, "temperature");
    }

    float getHumidity() const
    {
        return humidity_;
    }

    void setHumidity(const float humidity)
    {
        if (this->humidity_==humidity) return;

        this->humidity_ = humidity;

        notifyObservers(*this, "humidity");
    }

    float getPressure() const
    {
        return pressure_;
    }

    void setPressure(const float pressure)
    {
        if (this->pressure_==pressure) return;

        this->pressure_ = pressure;

        notifyObservers(*this, "pressure");
    }

    void setMeasurements(const float temperature, const float humidity, const float pressure)
    {
        setTemperature(temperature);
        setHumidity(humidity);
        setPressure(pressure);
    }

};

} // WeatherStation
} // Observer
} // HFDesignPatterns

#endif //OBSERVERPATTERN_WEATHERDATA_H
