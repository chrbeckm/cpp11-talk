
#include <iostream>
#include <cmath>

// Write a function `diff` that differentiates another
// function with a single parameter.
// Your function should have two parameters `f` and `x0`.

int main(int argc, char *argv[])
{
    auto func = [](double x) { return cos(2 * x); };
    std::cout << "Derivatife of func at pi: "
              << diff(func, M_PI) << std::endl;
    return 0;
}
