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

    int i = 1;

    while (i <= 10){

        if((i % 2) == 0 ){
            i += 1;
            continue;
        }
        if(i == 15) break;
        std::cout << i << std::endl;
        i += 1;
    }

    return 0;
}