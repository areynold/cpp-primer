/*
 * In addition to the ++ operator that adds 1 to its operand,
 * there is a decrement operator (--) that subtracts 1.
 * Use the decrement operator to write a while
 * that prints the numbers from 10 down to 0
 */

#include <iostream>

int main()
{
	int num = 10;
	while (num >= 0) {
		std::cout << num << std::endl;
		num--;
	}
	return 0;
}
