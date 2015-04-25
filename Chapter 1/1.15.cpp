/*
 * Write programs that contain the common errors discussed on p16.
 * Familiarize yourself with the messages the compiler generates
 */

#include <iostream>

/* Syntax errors */
// Missing ) in the parameter list for main
int main()
{
    // used colon, not a semicolon, at end of line
    std::cout << "Read each file." << std::endl;

    // missing quotes around string literal
    std::cout << "Update master." << std::endl;

    // second output operator is missing
    std::cout << "Write new master" << std::endl;

    /* Type errors */
    std::string typerror = "Hello";

    /* Declaration Errors */
    int v1 = 0, v2 = 0;
    // Uses v, not v1
    std::cin >> v1 >> v2;

    // cout not defined. Should be std::cout
    std::cout << v1 + v2 << std::endl;

    return 0;
}