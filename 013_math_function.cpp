#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

int main(int argc, char **argv)
{

    // source: en.cppreference.com/w/cpp/numeric/math
    std::cout << "abs(-10) = " << abs(-10) << std::endl;

    std::cout << "max(10, 20) = " << std::max(10, 20) << std::endl;
    std::cout << "min(10, 20) = " << std::min(10, 20) << std::endl;

    std::cout << "fmax(10.0, 20.0) = " << fmax(10.0, 20.0) << std::endl;
    std::cout << "fmin(10.0, 20.0) = " << fmin(10.0, 20.0) << std::endl;

    std::cout << "ceil(10.45) = " << ceil(10.45) << std::endl;
    std::cout << "floor(10.45) = " << floor(10.45) << std::endl;
    std::cout << "round(10.45) = " << round(10.45) << std::endl;

    std::cout << "pow(2, 3) = " << pow(2, 3) << std::endl;
    std::cout << "sqrt(16) = " << sqrt(16) << std::endl;
    std::cout << "cbrt(1000) = " << cbrt(1000) << std::endl;
    std::cout << "exp(2) = " << exp(2) << std::endl;

    // e ^ x
    std::cout << "exp(1) = " << exp(1) << std::endl;

    // 2 ^ x
    std::cout << "pow(2, 1) = " << pow(2, 1) << std::endl;

    // e * e * e ~= 20 so log(20.079) ~= 3
    std::cout << "log(20.079) = " << log(20.079) << std::endl;

    // 2 * 2 * 2 = 8
    std::cout << "log2(8) = " << log2(8) << std::endl;

    // Hypotenuse : SQRT(a^2 + b^2)
    std::cout << "hypot(3, 4) = " << hypot(3, 4) << std::endl;

    // Also sin, cos, tan, asin, acos, atan, atan2,
    // sinh, cosh, tanh, asinh, acosh, atanh

    return 0;
}