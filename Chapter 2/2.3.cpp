/*
 * What values will the following code produce?
 */

#include <iostream>

int main() {
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;   // 32
    std::cout << u - u2 << std::endl;   // some wacky result

    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;   // 32
    std::cout << i - i2 << std::endl;   // -32

    std::cout << i - u << std::endl;    // -32; wrong. int still converted to unsigned, not the other way around
    std::cout << u - i << std::endl;    // some wacky result. 0
}