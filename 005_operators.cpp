#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

int main(int argc, char **argv){

    // Conditional Operators : > < >= <= == !=
    // Logical Operators : && || !

    std::string sAge;

    std::cout << "Enter your Age: ";
    std::cin >> sAge;
    int nAge = std::stoi(sAge);

    if ((nAge >= 1) && (nAge <= 18)){
        std::cout << "Underage " << std::endl;
    } else if ((nAge == 21) || (nAge == 50)){
        std::cout << "Special State" << std::endl;
    } else {
        std::cout << "Adult" << std::endl;
    }

    return 0;
}