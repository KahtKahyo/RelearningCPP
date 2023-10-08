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
    // string variable
    std::string question = "Enter a Number: ";
    std::string num1, num2;

    // questions and inputs
    std::cout << question;
    std::cin >> num1;
    std::cout << "Enter Another Number: ";
    std::cin >> num2;

    // convert string to interger
    int nNum1 = std::stoi(num1);
    int nNum2 = std::stoi(num2);

    printf("%d + %d = %d\n", nNum1, nNum2, nNum1 + nNum2);

    return 0;
}