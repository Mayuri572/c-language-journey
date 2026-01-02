// Ternary Operator Example in C
#include <stdio.h>
// Syntax
//condition ? expression_if_true : expression_if_false;
int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    (number<5)? printf("Number is lessthan 5") : printf("Number is not less than 5");
    

    return 0;
}