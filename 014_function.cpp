#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

double AddNumbers(double x, double y);

int AssignAge(int age);

int AssignSecondAge(int *age);

void helloWorld(){
    std::cout << "Hello World!";
}

int main(int argc, char **argv)
{
    helloWorld();

    printf("%.1f + %.1f = %.1f\n", 1.0, 2.0, AddNumbers(1.0, 2.0));

    int age20 = 20;
    age20 = AssignAge(age20);
    int secondAge = AssignSecondAge(&age20);
    std::cout << age20;
    std::cout << secondAge;

    return 0;
}

double AddNumbers(double x = 0, double y = 0)
{
    return x + y;
}

int AssignAge(int age)
{
    age = 24;
    return age;
}

int AssignSecondAge(int *age){
    *age = 24;
    return *age;
}