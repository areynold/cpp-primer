/*
 * What does the following for loop do?
 * What is the final value of sum?
 */
#include <iostream>

// For loop adds all numbers from -100 through 100
// Final value should be 0
int main()
{
	int sum = 0;
	for (int i = -100; i <= 100; ++i)
		sum += i;
	std::cout << sum << std::endl;
	return 0;
}
