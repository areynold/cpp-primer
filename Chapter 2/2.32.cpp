/*
 * Is the following code legal or not?
 * If not, how might you make it legal?
 */

#include <iostream>

// Must be defined outside any function
constexpr int null = 0;         // null is a literal constant
constexpr const int *p = &null; // p is a constant pointer to the constant int null



int main() {
    // not legal:
    // int null - 0, *p = null;

    std::cout << null << std::endl;
    std::cout << *p << std::endl;
    return 0;
}