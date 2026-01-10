#include <stdio.h>

// Demonstration of pointer arithmetic

int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;   // points to first element

    printf("Value at p: %d\n", *p);
    printf("Value at p+1: %d\n", *(p + 1));
    printf("Value at p+2: %d\n", *(p + 2));

    return 0;
}
