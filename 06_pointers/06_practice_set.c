// Q1. Write a program to print the address of a variable and its value using a pointer.
#include <stdio.h>

// int main() {
//    int a = 10;
//    int *p = &a;

//  printf("Value of a: %d\n", a);
//    printf("Address of a: %p\n", p);
//    printf("Value using pointer: %d\n", *p);
//
//    return 0;
// }

// Q2. Write a program to change the value of a variable using pointer.
// int main() {
//    int x = 5;
//    int *p = &x;

//   *p = 20;

//   printf("Updated value of x: %d\n", x);

//   return 0;
// }

// Q3. Write a program to find sum of two numbers using pointers.

int main() {
   int num1, num2, sum;
   int *p1 = &num1;
   int *p2 = &num2;

   printf("Enter two numbers: ");
   scanf("%d %d", p1, p2);

   sum = *p1 + *p2;

   printf("Sum of %d and %d is: %d\n", *p1, *p2, sum);

   return 0;
}