#include <chrono>
#include <iomanip>
#include <iostream>

#include "measurement.hpp"

int main() {

    Measurement measurement{
        25.0,
        Unit::Celsius,
        std::chrono::system_clock::now()
    };

    const auto time = std::chrono::system_clock::to_time_t(measurement.timestamp_);

    const std::tm* localTime = std::localtime(&time);

    std::cout << "Device Test Platform\n";
    
    std::cout << "Measurement " << measurement.value_  << "\n";

    switch(measurement.unit_){
    case Unit::Celsius:
        std::cout << "Unit: Celsius\n";
        break;
    case Unit::Kilopascal:
        std::cout << "Unit: Kilopascal\n";
        break;
    case Unit::Volt:
        std::cout << "Unit: Volt\n";
        break;
    }

    if (localTime != nullptr) {
        std::cout << "Timestamp: " << std::put_time(localTime, "%Y-%m-%d %H:%M:%S") << '\n';
    }



    return 0;
}