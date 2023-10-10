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
    int age = 20;
    // if true, it will be assigned as true, if it's false, it will be assigned as false
    bool canIVote = (age >= 18) ? true : false; // by default the value is in bit(0 or 1)
    std::cout.setf(std::ios::boolalpha);        // turning bit to false or true on boolean
    std::cout << "Can I Vote: " << canIVote << std::endl;

    return 0;
}