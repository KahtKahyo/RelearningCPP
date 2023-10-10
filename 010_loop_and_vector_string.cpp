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

    std::vector<std::string> words;
    // receive strings separated by space
    std::stringstream ss("Some Random Words");
    std::string word;

    while (getline(ss, word, ' '))
    {
        words.push_back(word);
    }

    for (int i = 0; i < words.size(); ++i)
    {
        std::cout << words[i] << std::endl;
    }

    // something new(in my opinion)
    int arr3[] = {1, 2, 3};
    for (auto x : arr3)
        std::cout << x << std::endl;

    return 0;
}