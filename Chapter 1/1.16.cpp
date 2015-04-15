/* 
 * Write your own version of a program that prints
 * the sum of a set of integers read from cin
 */

#include <iostream>

int main()
{
    int sum = 0, value = 0;
    std::cout << "Enter a string of numbers to add:" << std::endl;
    while (std::cin >> value)
        sum += value;
    std::cout << "Your total is " << sum << std::endl;

    return 0;
}