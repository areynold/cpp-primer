#include <iostream>

int main()
{
    int sum = 0, value = 0;
    // read until end-of-file, caluclating a running total of all values read
    std::cout << "Enter numbers, followed by '<eof>' or 'ctrl+d to calculate: ";
    while (std::cin >> value)
        sum += value; // equivalent to sum = sum + value
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}