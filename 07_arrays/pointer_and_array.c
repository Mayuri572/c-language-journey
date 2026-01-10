#include <stdio.h>

// Pointers and arrays relationship

int main() {
    int arr[4] = {5, 10, 15, 20};
    int *p = arr;   // same as &arr[0]

    for (int i = 0; i < 4; i++) {
        printf("Address: %u  Value: %d\n", (p + i), *(p + i));
    }

    return 0;
}

// OUTPUT:
//Address: 6422280  Value: 5
//Address: 6422284  Value: 10
//Address: 6422288  Value: 15
//Address: 6422292  Value: 20