#include <stdio.h>

// Traversing a string using loop

int main() {
    char str[] = "Hello";

    int i = 0;
    while (str[i] != '\0') {
        printf("Character at index %d = %c\n", i, str[i]);
        i++;
    }

    return 0;
}
// Output:
// Character at index 0 = H
// Character at index 1 = e
// Character at index 2 = l
// Character at index 3 = l
// Character at index 4 = o