/*
 * Determine the type and value of the variables in this code
 */

#include <iostream>

int main() {
    int a = 3, b = 4;
    decltype(a) c = a;  // int c = 3
    std::cout << "c: " << c << std::endl;
    decltype(a = b) d = a;  //  int& d = 3
    std::cout << "d: " << d << std::endl;
    return 0;
}