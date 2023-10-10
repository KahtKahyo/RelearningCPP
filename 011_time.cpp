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
    std::srand(time(NULL));
    int secretNum = rand() % 11;

    int guess = 0;

    do
    {
        std::cout << "Guess the Number: ";
        std::cin >> guess;
        if (guess < secretNum)
            std::cout << "Too low!\n";
        if (guess > secretNum)
            std::cout << "Too high!\n";
    } while (secretNum != guess);
    std::cout << "You Guessed it!" << std::endl;
    
    return 0;
}