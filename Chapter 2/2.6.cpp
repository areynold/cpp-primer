/*
 * What, if any, are the differences between the following definitions?
 */

#include <iostream>

int main() {
    int month = 9, day = 7;     // month/day are standard decimal ints
    int month2 = 07, day2 = 07; // month2 is invalid octal, day2 is octal

    std::cout << month << " " << day << std::endl;
    std::cout << month2 << " " << day2 << std::endl;
    for (int i = 00; i <= 012; i++) {
        std::cout << i << std::endl;
    }
    return 0;
}
