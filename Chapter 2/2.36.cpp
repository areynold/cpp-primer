/*
 * Determine the type and value of the following variables
 */

#include <iostream>

int main() {
    int a = 3, b = 4;
    decltype(a) c = a;  // int c = 3
    std::cout << "c: " << c << std::endl;
    decltype((b)) d = a;    // int& d = 3
    std::cout << "d: " << d << std::endl;
    ++c;    // c = 4
    std::cout << "c: " << c << std::endl;
    ++d;    // c = 4
    std::cout << "d: " << d << std::endl;

    return 0;
}