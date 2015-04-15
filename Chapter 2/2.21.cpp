/*
 * Explain each of the following definitions.
 * Indicate whether any are illegal and why.
 */

int main() {
    int i = 0;
    // a) Illegal. Should be double *dp. Types differ
    // error: cannot convert ‘int*’ to ‘double*’ in initialization
    double* dp = &i;

    // b) Illegal. Should be *ip = &i
    // error: invalid conversion from ‘int’ to ‘int*’ [-fpermissive]
    int *ip = i;

    // c) Legal
    int *p = &i;
    return 0;
}