#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book;
    // read ISBN, number of copies sold, and sales price
    std::cin >> book;
    // Write ISBN, number of copies sold, total revenue, and average price
    std::cout << book << std::endl;

    Sales_item item1, item2;
    std::cin >> item1 >> item2; // read a pair of transactions
    std::cout << item1 + item2 << std::endl;    // print their sum

    return 0;
}