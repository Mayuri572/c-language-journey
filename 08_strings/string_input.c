#include <stdio.h>

// Taking string input using different methods

int main() {
    char name1[20];
    char name2[20];

    // Method 1: scanf (no spaces)
    printf("Enter name (no spaces): ");
    scanf("%s", name1);

    // Clear newline
    getchar();

    // Method 2: fgets (with spaces)
    printf("Enter full name: ");
    fgets(name2, sizeof(name2), stdin);

    printf("\nUsing scanf: %s\n", name1);
    printf("Using fgets: %s", name2);

    return 0;
}
// Output:
// Enter name (no spaces): Mayuri
// Enter full name: Mayuri Jadhav   
//Using scanf: Mayuri
//Using fgets: Mayuri Jadhav