/*
 * http://www.informit.com/title/0321714113 contains a copy of Sales_item.h
 * in the Chapter 1 code directory. Copy that file to your working directory.
 * Use it to write a program that reads a set of book sales transactions,
 * writing each transaction to standard output
 */

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book;
    std::cout << "Enter ISBN, number of copies sold, and sale price:" << std::endl;
    // read ISBN, number of copies sold, and sales price
    while (std::cin >> book) {
        // Write ISBN, number of copies sold, total revenue, and average price
        std::cout << "ISBN, total sales, unit price: "
                  << book << std::endl;
    }

    return 0;
}