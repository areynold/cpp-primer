// Rewrite the first two exercises from 1.4.1 (1.9 & 1.10) using for loops

// 1.10
/*
 * In addition to the ++ operator that adds 1 to its operand,
 * there is a decrement operator (--) that subtracts 1.
 * Use the decrement operator to write a while
 * that prints the numbers from 10 down to 0
 */

#include <iostream>

int main()
{
	for (int num = 10; num >= 0; num--)
		std::cout << num << std::endl;
	return 0;
}
