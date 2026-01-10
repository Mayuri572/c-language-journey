#include <stdio.h>

// Pointers with arrays

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;   // same as &arr[0]

    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, *(p + i));
    }

    return 0;
}
