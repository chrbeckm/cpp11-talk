
#include <iostream>
#include <functional>
#include <vector>
#include <cmath>

std::function<double(double)> make_poly(std::vector<double> p) {
    return [p](double x) {
        double s = 0;
        for(int i=0; i<p.size(); i++) {
            s += p[i] * pow(x, i);
        }
        return s;
    };
}

int main(int argc, char *argv[])
{
    auto poly = make_poly({1.0, 2.0, 3.0});
    std::cout << "poly(42) is " << poly(42) << std::endl;
    return 0;
}

