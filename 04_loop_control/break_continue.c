#include <stdio.h>

// Demonstration of break and continue

int main() {
    int i;

    for (i = 1; i <= 5; i++) {
        if (i == 3)
            continue;   // skip 3

        if (i == 5)
            break;      // stop loop

        printf("%d\n", i);
    }

    return 0;
}
