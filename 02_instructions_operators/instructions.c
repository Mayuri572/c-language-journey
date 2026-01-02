#include <stdio.h>
#include <math.h>
// Demonstration of instructions in C

int main() {
    int a = 10;        // assignment instruction
    int b = a + 5;     // arithmetic instruction

    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);

   // Using arithmetic operators
    printf("The value of a + b is : %d\n", a+b);
    printf("The value of a - b is : %d\n", a-b);
    printf("The value of a * b is : %d\n", a*b);
    printf("The value of a / b is : %d\n", a/b);
    printf("The remainder of a / b is : %d\n", a%b);

    // Exponentiation is not directly supported in C, but can be done using the pow function from math.h
    printf("The value of a raised to the power b is : %f\n", pow(a, b));

    

   return 0;
}

//Output:
//Value of a: 10
//Value of b: 15