/*
 * Which, if any of the following assignments are legal?
 * If they are legal, explain what they do.
 */

#include <iostream>

int main() {
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    r2 = 3.14159;   // assigns 3.14159 to d
    std::cout << "r2: " << r2 << ", d: " << d << std::endl;
    r2 = r1;        // invalid. r2 and r1 are different types
    std::cout << "r2: " << r2 << ", r1: " << r1 << ", i: " << i << std::endl;
    i = r2;         // invalid. i and d are different types
    std::cout << "i: " << i << ", r2: " << r2 << ", d: " << d << std::endl;
    r1 = d;         // invalid. can't reassign references
    std::cout << "r1: " << r1 << ", d: " << d << std::endl;

    return 0;
}