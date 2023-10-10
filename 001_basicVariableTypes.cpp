#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

int globalVar = 10;
const double PI = 3.141;

int main(int argc, char **argv)
{
    std::cout << "Global variable: " << globalVar << std::endl;
    std::cout << "PI: " << PI << std::endl;

    // Variable Types
    int val = 10;
    float value = 10.0;
    bool isTrue = true;
    char grade = 'A';
    std::string name = "John";

    // Float is only accurate up to 6th decimal digits
    float value1 = 1.1111111;
    float value2 = 1.1111111;

    printf("Sum of floats = %.7f\n", (value1 + value2));

    // Double however, is accurate up to the 16th decimal digits
    double dValue1 = 1.11111111111111111;
    double dValue2 = 1.11111111111111111;

    printf("Sum of doubles = %.17f\n", (dValue1 + dValue2));

    // Auto
    auto guessTheVariable = true;

    return 0;
}
