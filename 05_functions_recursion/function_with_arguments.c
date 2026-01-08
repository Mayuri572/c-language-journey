#include <stdio.h>

// Function with arguments
void add(int a, int b);

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    add(x, y);   // function call with arguments
    return 0;
}

void add(int a, int b) {
    printf("Sum = %d\n", a + b);
}
