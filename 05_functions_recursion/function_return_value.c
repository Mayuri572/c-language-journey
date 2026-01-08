#include <stdio.h>

// Function with return value
int square(int n);

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = square(num);   // function returns value
    printf("Square = %d\n", result);

    return 0;
}

int square(int n) {
    return n * n;
}