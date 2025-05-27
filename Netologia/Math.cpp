#include <iostream>
#include <cmath> //для функции pow
#include "Math.h"

double MyMath::sum(double number1, double number2) { return number1 + number2; }

double MyMath::subtraction(double number1, double number2) { return number1 - number2; }

double MyMath::multiplication(double number1, double number2) { return number1 * number2; }

double MyMath::division(double number1, double number2) { return number1 / number2; }

double MyMath::degree(double number1, double number2) { return std::pow(number1, number2); }