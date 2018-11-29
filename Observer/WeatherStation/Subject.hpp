#ifndef OBSERVERPATTERN_SUBJECT_H
#define OBSERVERPATTERN_SUBJECT_H

#include <mutex>
#include <vector>
#include <algorithm>
#include "Observer.hpp"

namespace HFDesignPatterns {
namespace Observer {
namespace WeatherStation {

template<typename T>
class Subject {
private:
    std::vector<Observer<T>*> observers;
    std::mutex mtx;

public:
    void notifyObservers(T& source, const std::string& name)
    {
        std::vector<Observer<T>*> observers_copy;
        {
            std::lock_guard<std::mutex> lock{mtx};
            observers_copy = observers;
        }
        for (auto observer : observers_copy) {
            if (observer) {
                observer->fieldChanged(source, name);
            }
        }

        observers.erase(
            std::remove(observers.begin(), observers.end(), nullptr),
            observers.end()
        );
    }

    void registerObserver(Observer<T>* o)
    {
        std::lock_guard<std::mutex> lock{mtx};
        observers.push_back(o);
    }

    void removeObserver(Observer<T>* o)
    {
        std::lock_guard<std::mutex> lock{mtx};
        auto it = std::find(observers.begin(), observers.end(), o);
        if (it!=observers.end()) {
            *it = nullptr;
        }
    }

};

} // WeatherStation
} // Observer
} // HFDesignPatterns

#endif //OBSERVERPATTERN_SUBJECT_H
