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

    std::string str1 = "I'm a string";
    std::cout << "1st : " << str1[0] << std::endl;
    std::cout << "Last : " << str1.back() << std::endl;
    std::cout << "Length : " << str1.length() << std::endl;

    std::string str2 = str1;
    std::string str3(str2, 4);
    std::string str4 = str1 + " and your not";
    str4.append("!");
    str4.erase(12, str4.length() - 1);

    std::cout << "New String " << str4 << std::endl;
    if (str4.find("string") != std::string::npos)
        std::cout << "String Index: " << str4.find("string") << std::endl;

    std::cout << "Substring : " << str4.substr(6, 6) << std::endl;
    std::string strNum = std::to_string(1 + 2);
    std::cout << "I'm a String : " << strNum << std::endl;

    char letterZ = 'Z';
    char num5 = '5';
    char aSpace = ' ';
    std::cout << "Is z a letter or number : " << std::isalnum(letterZ);
    std::cout << "Is z a letter : " << isalpha(letterZ) << std::endl;
    std::cout << "Is z a number : " << isdigit(letterZ) << std::endl;
    std::cout << "Is z a space : " << isspace(letterZ) << std::endl;

    std::cout << "Is z a letter or number : " << std::isalnum(num5);
    std::cout << "Is z a letter : " << isalpha(num5) << std::endl;
    std::cout << "Is z a number : " << isdigit(num5) << std::endl;
    std::cout << "Is z a space : " << isspace(num5) << std::endl;

    std::cout << "Is z a letter or number : " << std::isalnum(aSpace);
    std::cout << "Is z a letter : " << isalpha(aSpace) << std::endl;
    std::cout << "Is z a number : " << isdigit(aSpace) << std::endl;
    std::cout << "Is z a space : " << isspace(aSpace) << std::endl;

    return 0;
}