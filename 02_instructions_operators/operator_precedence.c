#include <stdio.h>

int main()
{
    int a = 5, b = 10, c = 15;
    int result;

    // Demonstrating operator precedence
    result = a + b * c;                          // Multiplication has higher precedence than addition
    printf("Result of a + b * c: %d\n", result); // Expected: 5 + (10 * 15) = 155

    result = (a + b) * c;                          // Parentheses change the order of evaluation
    printf("Result of (a + b) * c: %d\n", result); // Expected: (5 + 10) * 15 = 225

    result = a + b - c * 2;                          // Multiplication first, then addition and subtraction
    printf("Result of a + b - c * 2: %d\n", result); // Expected: 5 + 10 - (15 * 2) = -15

    result = (a + b - c) * 2;                          // Parentheses change the order
    printf("Result of (a + b - c) * 2: %d\n", result); // Expected: (5 + 10 - 15) * 2 = 0

    return 0;
}

// Output:
// Result of a + b * c: 155
// Result of (a + b) * c: 225
// Result of a + b - c * 2: -15
// Result of (a + b - c) * 2: 0