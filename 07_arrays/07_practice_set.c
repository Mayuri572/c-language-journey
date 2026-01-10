// Q1. Write a program to find the sum of elements of an array.
#include <stdio.h>

// int main() {
//    int arr[5] = {10, 20, 30, 40, 50};
//   int sum = 0;
//
//  for (int i = 0; i < 5; i++) {
//      sum += arr[i];
//   }
//
//   printf("Sum = %d\n", sum);
//    return 0;
// }
// OUTPUT:
// Sum = 150

// Q2. Write a program to find the average of array elements.
// int main() {
//   int arr[5] = {2, 4, 6, 8, 10};
//   int sum = 0;

//   for (int i = 0; i < 5; i++) {
//       sum += arr[i];
//   }

//   printf("Average = %.2f\n", sum / 5.0);
//   return 0;
// }

// OUTPUT:
// Average = 6.00

// Q3. Write a program to find the largest element in an array.
// int main() {
//   int arr[5] = {12, 45, 7, 23, 89};
//   int max = arr[0];
//   for (int i = 1; i < 6; i++) {
//      if (arr[i] > max) {
//         max = arr[i];
//      }
//  }

//  printf("Largest element = %d\n", max);
//  return 0;
//}

// Q4. Write a program to reverse an array.

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    printf("Reversed array:\n");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
