
#include <vector>
#include <random>
#include <iostream>

// What does the following code do?
// Try to simplify it by using initialization lists,
// auto and foreach where appropriate.

int main(int argc, char *argv[])
{
    std::random_device rd;
    std::mt19937 rand(rd());
    std::normal_distribution<double> dist(0, 1);

    std::vector<double> data;
    data.push_back(5.2);
    data.push_back(1.1);
    data.push_back(4.2);
    data.push_back(2.9);
    data.push_back(6.3);

    std::vector<double> result;

    for (std::vector<double>::iterator it = data.begin();
            it != data.end(); it++) {
        result.push_back(*it + dist(rand));
    }

    for (std::vector<double>::iterator it = result.begin();
            it != result.end(); it++) {
        std::cout << *it << std::endl;
    }

    return 0;
}
