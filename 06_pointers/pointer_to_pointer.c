#include <stdio.h>

// Demonstration of pointer to pointer

int main() {
    int a = 10;
    int *p;
    int **pp;

    p = &a;    // p stores address of a
    pp = &p;   // pp stores address of p

    printf("Value of a: %d\n", a);
    printf("Value using *p: %d\n", *p);
    printf("Value using **pp: %d\n", **pp);

    return 0;
}
