// 01_Start.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>
// constant of numbers used in mathematical 
#include <numbers>
//Mathematical function of c++ = https://en.cppreference.com/w/cpp/numeric/math


int main()
{
    std::cout << "c for finance foundations for quantitative programming" << std::endl;


    return 0;
}


// zero coupon bond
double zero_coupon_bond(double face_value, double int_rate, double year_fraction)
{
    return face_value * std::exp(-int_rate * year_fraction);

}


// use of library <numbers> for consistent variables as pi or sqrt of 2
double some_fcn(double x, double y) {

    double math_inv_sqrt_two_pi = std::numbers::sqrt2;
    return math_inv_sqrt_two_pi * (std::sin(std::numbers::pi * x) + std::cos(std::numbers::inv_pi * y));

}




