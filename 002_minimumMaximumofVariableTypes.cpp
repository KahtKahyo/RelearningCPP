#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

// Global variable
int globalVar = 0;
// Constant
const double PI = 3.141;

// Maximum and minimum of unsigned integer
void minMaxUnsignedInt()
{

    std::cout << "Min unsigned int: " << std::numeric_limits<unsigned int>::min()
              << std::endl;
    std::cout << "Max unsigned int: " << std::numeric_limits<unsigned int>::max()
              << std::endl;
}

// Maximum and minimum of interger
void minMaxInt()
{

    std::cout << "Min int: " << std::numeric_limits<int>::min()
              << std::endl;
    std::cout << "Max int: " << std::numeric_limits<int>::max()
              << std::endl;
}

// Maximum and minimum of unsigned short interger
void minMaxUnsignedShortInt()
{

    std::cout << "Min unsigned short int: " << std::numeric_limits<unsigned short int>::min()
              << std::endl;
    std::cout << "Max unsigned short int: " << std::numeric_limits<unsigned short int>::max()
              << std::endl;
}

// Maximum and minimum of short interger
void minMaxShortInt()
{

    std::cout << "Min short int: " << std::numeric_limits<short int>::min()
              << std::endl;
    std::cout << "Max short int: " << std::numeric_limits<short int>::max()
              << std::endl;
}

// Maximum and minimum of unsigned long interger
void minMaxUnsignedLongInt()
{

    std::cout << "Min unsigned long int: " << std::numeric_limits<unsigned long int>::min()
              << std::endl;
    std::cout << "Max unsigned long int: " << std::numeric_limits<unsigned long int>::max()
              << std::endl;
}

// Maximum and minimum of long interger
void minMaxLongInt()
{

    std::cout << "Min long int: " << std::numeric_limits<long int>::min()
              << std::endl;
    std::cout << "Max long int: " << std::numeric_limits<long int>::max()
              << std::endl;
}

// Maximum and minimum of float
void minMaxFloat()
{

    std::cout << "Min float: " << std::numeric_limits<float>::min()
              << std::endl;
    std::cout << "Max float: " << std::numeric_limits<float>::max()
              << std::endl;
}

// Maximum and minimum of double
void minMaxDouble()
{

    std::cout << "Min double: " << std::numeric_limits<double>::min()
              << std::endl;
    std::cout << "Max double: " << std::numeric_limits<double>::max()
              << std::endl;
}

// Maximum and minimum of long double
void minMaxLongDouble()
{

    std::cout << "Min long double: " << std::numeric_limits<long double>::min()
              << std::endl;
    std::cout << "Max long double: " << std::numeric_limits<long double>::max()
              << std::endl;
}

int main(int argc, char **argv)
{

    std::cout << "This part doesn't contain full types of variables" << std::endl;
    std::cout << "But at least you can grasp a bit about several types of variables" << std::endl;

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

    // Minimum and maximum values for each variables

    minMaxUnsignedInt();
    minMaxInt();
    minMaxUnsignedShortInt();
    minMaxShortInt();
    minMaxUnsignedLongInt();
    minMaxLongInt();
    minMaxFloat();
    minMaxDouble();
    minMaxLongDouble();

    return 0;
}
