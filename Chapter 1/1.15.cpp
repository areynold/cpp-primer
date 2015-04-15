/*
 * Write programs that contain the common errors discussed on p16.
 * Familiarize yourself with the messages the compiler generates
 */

#include <iostream>

/* Syntax errors */
// Missing ) in the parameter list for main
int main(
{
    // used colon, not a semicolon, after endl
    std::cout << "Read each file." << std::endl:

    // missing quotes around string literal
    std::cout << Update master. << std::endl;

    // second output operator is missing
    std::cout << "Write new master" std::endl;

    /* Type errors */
    int typerror = "Hello"

    /* Declaration Errors */
    int v1 = 0, v2 = 0;
    // Uses v, not v1
    std::cin >> v >> v2;

    // cout not defined. Should be std::cout
    cout << v1 + v2 << std::endl;

    return 0;
}