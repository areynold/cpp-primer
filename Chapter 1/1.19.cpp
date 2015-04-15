/*
 * Revise the program you wrote for the exercises in 1.4.1 (p13)
 * that printed a range of numbers so that it handles input
 * in which the first number is smaller than the second
 */

#include <iostream>

int main()
{
    int v1 = 0, v2 = 0, swapper = 0;
    std::cout << "Enter two digits: ";
    std::cin >> v1 >> v2;
    // Make sure smaller number is checked first
    if (v1 > v2) {
        swapper = v1;
        v1 = v2;
        v2 = swapper;
    }
    std::cout << "The range between " << v1 << " and " << v2
              << " is: " << std::endl;

    while (v1 <= v2) {
        std::cout << v1 << std::endl;
        v1++;
    }
    return 0;
}
