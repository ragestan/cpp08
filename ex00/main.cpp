#include "easyfind.hpp"

int main() 
{
    std::vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);

    int target_value = 3;
    easyfind(numbers, 8);
    easyfind(numbers, target_value);


    return 0;
}