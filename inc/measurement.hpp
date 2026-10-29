#pragma once

#include <chrono>

enum class Unit {
    Celsius,
    Kilopascal,
    Volt
};

struct Measurement {
    double value_{};
    Unit unit_{Unit::Celsius};
    std::chrono::time_point<std::chrono::system_clock> timestamp_ {std::chrono::system_clock::now()};
};