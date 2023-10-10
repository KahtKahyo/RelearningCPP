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

    int arrNums[10] = {1};
    int arrNums2[] = {1, 2, 3};
    int arrNums3[5] = {8, 9};

    std::cout << "1st Value : " << arrNums3[0];
    arrNums3[0] = 7; // To change the number of the given index

    std::cout << "1st Value : " << arrNums3[0] << std::endl;
    int arrNums4[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};

    std::cout << arrNums4[0][1][1] << std::endl;

    return 0;
}