#include <stdio.h>

// Different ways to initialize arrays

int main() {

    // Method 1: Initialize during declaration
    int a[5] = {1, 2, 3, 4, 5};

    // Method 2: Partial initialization (rest become 0)
    int b[5] = {10, 20};

    // Method 3: Size not specified
    int c[] = {7, 8, 9};

    printf("Array a:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    printf("\nArray b:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", b[i]);
    }

    printf("\nArray c:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
