/*
 * Write code to change the value of a pointer.
 * Write code to change the value to which the pointer points
 */

#include <iostream>

int main() {
    int i = 2, j = 4;
    std::cout << "i: " << i << ", j: " << j << std::endl;
    int *p = &i;     // p is a pointer to the address of i
    std::cout << "p: " << p << ", *p: " << *p << std::endl;
    p = &j;         // p now points to the address of j
    std::cout << "p: " << p << ", *p: " << *p << std::endl;
    *p = 10;        // j is now 10
    std::cout << "p: " << p << ", *p: " << *p << ", j: " << j << std::endl;
    return 0;
}