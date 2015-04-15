/*
 * For each of the following declarations indicate whether
 * the object being declared is a top-level or low-level pointer
 */

int main() {
    int i = 0;
    const int v2 = 0; int v1 = v2;  // v2 is top-level. The object being declared is const
                                    // v1 is low-level. it is a copy of a const object
    int *p1 = &v1, &r1 = v1;        // p1 is low-level. It is a pointer to a const value.
                                    // r1 is top-level. It is a permanent reference to a top-level const.
    const int *p2 = &v2, *const p3 = &i, &r2 = v2;  // p2 is a low-level pointer to const v2.
                                                    // p3 is a top-level pointer to i
                                                    // r2 is a top-level pointer to v2

    /*
    * Given the declarations in the previous exercise
    * determine whether the following assignments are legal.
    * Explain how the top-level or low-level const applies in each case.
    */

    r1 = v2;    // legal. const v2 is copied into r1
    p1 = p2;    // illegal. p1 is a regular pointer and can't be changed to a pointer to a constant
    p2 = p1;    // legal. p2 is a pointer to a constant, not itself constant
    p1 = p3;    // illegal. p3 is a constant pointer to i
    p2 = p3;    //
}