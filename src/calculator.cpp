#include "calculator.h"
#include <cmath>
#include <stdexcept>

double Calculator::add(double a, double b) {
    return a + b;
}

double Calculator::subtract(double a, double b) {
    return a - b;
}

double Calculator::multiply(double a, double b) {
    return a * b;
}

double Calculator::divide(double a, double b) {
    if (b == 0)
        throw std::invalid_argument("Division by zero");
    return a / b;
}

double Calculator::power(double base, double exponent) {
    return std::pow(base, exponent);
}

double Calculator::sqrt(double value) {
    if (value < 0)
        throw std::domain_error("Square root of negative number");
    return std::sqrt(value);
}

