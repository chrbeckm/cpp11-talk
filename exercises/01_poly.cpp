
#include <iostream>

// Write a function make_poly that takes a vector of
// double coefficients and returns a lambda function
// that represents the polynomial with these coefficients.

int main(int argc, char *argv[])
{
    auto poly = make_poly({1.0, 2.0, 3.0});
    std::cout << "poly(42) is " << poly(42) << std::endl;
    return 0;
}

