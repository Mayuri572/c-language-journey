#include <stdio.h>

// Introduction to arrays

int main() {
    int marks[5] = {80, 85, 90, 75, 88};

    for (int i = 0; i < 5; i++) {
        printf("marks[%d] = %d\n", i, marks[i]);
    }

    return 0;
}
