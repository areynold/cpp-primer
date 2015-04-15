/*
 * Using the variable definitions from this section,
 * determine what happens in each of these assignments
 */

#include <iostream>

int main() {
    int i = 0, &r = i;
    auto a = r;     // a is an int

    const int ci = i, &cr = ci;
    auto b = ci;    // b is an int (top-level const in ci is dropped
    auto c = cr;    // c is an int (cr is an alias for ci whose const is top level)
    auto d = &i;    // d is an int* (& of an int object is int*)
    auto e = &ci;   // e is const int* (& of a const object is a low-level const)

    const auto f = ci;  //deduced type of ci is int; f has type const int

    auto &g = ci;   // g is a const int& that is bound to ci
    // auto &h = 42;   // error: we can't bind a plain reference to a literal
    const auto &j = 42;     // ok: we can bind a const reference to a literal

    auto k = ci, &l = i;    // k is int; l is int&
    auto &m = ci, *p = &ci;     //m is a const int&; p is a pointer to const int
    // error: type deduced from i is int; type deduced from &ci is const int
    // auto &n = i, *p2 = &ci;     // error: can't mix types

    std::cout << "a: " << a << std::endl;
    a = 42; // a == 42
    std::cout << "a: " << a << std::endl;

    std::cout << "b: " << a << std::endl;
    b = 42; // b == 42
    std::cout << "b: " << a << std::endl;

    std::cout << "c: " << a << std::endl;
    c = 42; // c == 42
    std::cout << "c: " << a << std::endl;

    std::cout << "d: " << a << std::endl;
    d = 42; // error: d is a pointer to an int
    std::cout << "d: " << a << std::endl;

    std::cout << "e: " << a << std::endl;
    e = 42; // error: e is const
    std::cout << "e: " << a << std::endl;

    std::cout << "g: " << a << std::endl;
    g = 42; // error: g is read only
    std::cout << "g: " << a << std::endl;

    return 0;
}