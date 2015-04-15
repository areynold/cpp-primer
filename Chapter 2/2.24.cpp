/*
 * Why is the initialization of p legal but that of 1p illegal
 */

int main() {
    int i = 42;
    void *p = &i;   // void pointers can point to any object
    long *lp = &i;   // this pointer has a type mismatch
    return 0;
}