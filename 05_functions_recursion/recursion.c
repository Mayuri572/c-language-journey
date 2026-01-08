// concept : Function calls itself (Recursion)
#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial = %d\n", factorial(num));
    return 0;
}

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
