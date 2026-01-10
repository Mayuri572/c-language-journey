#include <stdio.h>

// Demonstration of pointer basics

int main() {
    int a = 10;
    int *p;

    p = &a;   // pointer stores address of a

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value stored in p: %p\n", p);
    printf("Value at address p: %d\n", *p);

    return 0;
}
