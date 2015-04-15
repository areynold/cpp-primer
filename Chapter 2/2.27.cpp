/*
 * Which of the following initializations are legal?
 * Explain why.
 */

#include <iostream>

int main() {
    // a) 
    // Illegal. i is a valid integer and r must be bound to a constant object
    //int i = -1, &r = 0;
    //std::cout << i << ", " << r << std::endl;

//     int i2 = 34;
//     // b) Legal. p2 will always point to i2
//     int *const p2 = &i2;
//     std::cout << p2 << ", " << i2 << std::endl;
//     i2 = 3;
//     std::cout << p2 << ", " << i2 << std::endl;

    // c) Legal. Both i and r are initialized with constants. r will always be 0.
//     const int i = -1, &r = 0;

    // d) Legal. p3 is an immutable pointer to an immutable int
//     const int i2 = 34;
//     const int *const p3 = &i2;
//     std::cout << p3 << ", " << i2 << std::endl;

    // e) Legal. p1 is constant pointer to i2
//     int i2 = 34;
//     const int *p1 = &i2;
//     std::cout << p1 << ", " << i2 << std::endl;

    // f) Illegal. &const doesn't make any sense
//     const int &const r2;

    // g) Legal. i2 will always be i. r will always be a reference to i
    int i = 42;
    const int i2 = i, &r = i;
    std::cout << i2 << ", " << r << ", " << i << std::endl;
    return 0;
}