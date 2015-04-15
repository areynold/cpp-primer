/*
 * What does the following program do?
 */

#include <iostream>

int main() {
    int i = 42;     // initialize int i to 42
    int *p1 = &i    // initialize pointer p1 to the address of i
    *p1 = *p1 * *p1;    // multiply the value of p1 (i, or 42) by itself, and assign to the value of p1 (i)
    std::cout << i << std::endl;
    return 0;
}