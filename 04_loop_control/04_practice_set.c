#include <stdio.h>
int main()
{

    // Q1: Write a program to print multiplication table of a given number n.

    int n, i;
    printf("Enter the number to print its multiplication table: \n");
    scanf("%d", &n);
    printf("Multiplication table of %d is:\n", n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    // Q2: Write a program to print multiplication table of a given number n in reverse order.
    printf("Multiplication table of %d in reverse order is:\n", n);
    for (i = 10 ; i <= 1; i--){
        printf("%d * %d = %d\n", n, i, n * i);
    }

    // Q3: Write a program to calculate the sum of first n natural numbers using a loop.
    int sum = 0;
    printf("Enter a number to calculate the sum of first n natural numbers: \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        sum += i;
    }
    printf("The sum of first %d natural numbers is: %d\n", n, sum);


    // Q4: using while loop, write a program to print the first n natural numbers.
    printf("First %d natural numbers are:\n", n);
    i = 1;
    while (i <= n){
        printf("%d\n", i);
        i++;
    }   

    // Q5: write a program to find the factorial of a given number n using a for loop.
    int fact = 1;
    printf("Enter a number to find its factorial: \n"); 
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        fact *= i;
    }
    printf("The factorial of %d is: %d\n", n, fact);

    //Q6: write a program to check prime number using a for loop.
    int isPrime = 1;
    printf("Enter a number to check if it is prime: \n");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++){
        if (n % i == 0){
            isPrime = 0;
            break;
        }
    }
    if (isPrime && n > 1)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);



    return 0;
}