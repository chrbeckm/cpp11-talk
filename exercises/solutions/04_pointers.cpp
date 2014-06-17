
#include <iostream>
#include <memory>

extern "C" {

    typedef struct {
        double t, x, y, z;
    } vector31;

    double distance(vector31* vec) {
        double result = vec->t * vec->t
                      - vec->x * vec->x
                      - vec->y * vec->y
                      - vec->z * vec->z;
        return result;
    }
}

// Imagine the code above is from and old C library and
// you want to use it.
// Create a pointer to a vector31 and initialize its coordinates.
// Instead of using it directly when calling `distance`,
// try to wrap it in a unique_ptr.

int main(int argc, char *argv[])
{
    std::unique_ptr<vector31> ptr(new vector31{1.0, -1.0, 2.0, 3.0});
    std::cout << distance(ptr.get()) << std::endl;
    return 0;
}
