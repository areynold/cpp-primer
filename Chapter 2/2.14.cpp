/*
 * Is the following program legal?
 * If so, what values are printed?
 */

// Yes. i has block scope in the first declaration and conditional in the second.
// cout will print block value for i (100), and computed value for sum (45)

#include <iostream>

int main() {
    int i = 100, sum = 0;
    for (int i = 0; i !=10; ++i) {
        sum += i;
    }
    std::cout << i << " " << sum << std::endl;
}