/*
 * Compile the following to see the error generated when you
 * forget the semicolon after a struct definition
 */

struct Foo { /* empty */ }  // no trailing semicolon
int main() {
    return 0;
}