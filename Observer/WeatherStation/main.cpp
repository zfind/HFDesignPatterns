#include "WeatherData.hpp"
#include "CurrentConditionsDisplay.hpp"
#include "StatisticsDisplay.hpp"
#include "ForecastDisplay.hpp"
using namespace HFDesignPatterns::Observer::WeatherStation;

int main()
{
    WeatherData weatherData;

    CurrentConditionsDisplay currentConditionsDisplay{&weatherData};
    StatisticsDisplay statisticsDisplay{&weatherData};
    ForecastDisplay forecastDisplay{&weatherData};

    weatherData.setMeasurements(80, 65, 30.4f);
    weatherData.setMeasurements(82, 70, 29.2f);
    {
        CurrentConditionsDisplay currentConditionsDisplayScoped{&weatherData};
        weatherData.setMeasurements(22, 32, 42.2f);
    }
    weatherData.setMeasurements(78, 90, 29.2f);

    return 0;
}
