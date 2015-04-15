// Write a program that uses a while to sum the numbers from 50 to 100
#include <iostream>

int main()
{
	int val = 50, sum = 0;
	while (val <= 100) {
		sum += val;
		++val;
	}
	std::cout << "The sum of 50 to 100 inclusive is "
		  << sum << std::endl;

	return 0;
}
