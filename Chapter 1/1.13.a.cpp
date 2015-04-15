// Rewrite the first two exercises from 1.4.1 (1.9 & 1.10) using for loops

// 1.9
// Write a program that uses a while to sum the numbers from 50 to 100
#include <iostream>

int main()
{
	int sum = 0;
	for (int val = 50; val <= 100; val++)
		sum += val;
	std::cout << "The sum of 50 to 100 inclusive is "
		  << sum << std::endl;

	return 0;
}
