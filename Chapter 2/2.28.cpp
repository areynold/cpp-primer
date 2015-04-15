/*
 * Explain the following definitions.
 * Identify any that are illegal
 */

#include <iostream>

int main() {
    // a) Illegal. i is an integer. cp is a null pointer to a constant without a constant to point to
    int i, *const cp;
    std::cout << i << " " << cp << std::endl;

    // b) Illegal. Same problem as a
    int *p1, *const p2;

    // c) Illegal. ic needs to be initialized in order to be a valid constant. r is a constant reference to ic
    const int ic, &r = ic;

    // d) Illegal. p3 needs an initializer to be a constant
    const int *const p3;

    // e)
    const int *p;
    return 0;
}