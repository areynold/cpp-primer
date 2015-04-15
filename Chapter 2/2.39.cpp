/*
 * Write your own version of the sales_data class
 */

#include <string>
#include <iostream>

struct Sales_Data {
    // isbn
    std::string isbn;
    // number of books sold
    int quant_sold = 0;
    // book sale price
    double sale_price = 0;
    // Total revenue
    double revenue;
};

int main() {
    Sales_Data sale1;
    sale1.isbn = "123-456-x";
    sale1.quant_sold = 5;
    sale1.sale_price = 5.95;
    sale1.revenue = sale1.quant_sold * sale1.sale_price;
    std::cout << sale1.isbn << " " << sale1.quant_sold << " " 
        << sale1.sale_price << " " << sale1.revenue << std::endl;
    return 0;
}