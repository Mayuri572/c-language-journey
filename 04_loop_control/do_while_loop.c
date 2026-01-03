#include <stdio.h>

// Demonstration of do-while loop

int i;

int main() {
    i = 1;

    do {
        printf("Value: %d\n", i);
        i++;
    } while (i <= 5);

    return 0;
}
