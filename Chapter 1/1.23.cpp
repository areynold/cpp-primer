/*
 * Write a program that reads several transactions
 * and counts how many transactions occur for each ISBN.
 */

#include <iostream>
#include "Sales_item.h"

int main()
{
    // Create container for unique ISBNs and number purchased
    Sales_item total_sales;

    // Create container for transactions
    Sales_item transaction;
    // Read transactions (ISBN, number purchased, purchase price)
    while (std::cin >> transaction) {
        // Check for uniqueness
        if ( transaction.isbn() == total_sales.isbn() ) {
            // // Increment existing entry
            total_sales += transaction;
        } else {
            // // Create new entry
            total_sales = transaction;
        }
        // Display total sales
        std::cout << total_sales << std::endl;
    }
    return 0;
}