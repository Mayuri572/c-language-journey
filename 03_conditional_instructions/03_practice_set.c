// Practice Set: Conditional Instructions 
#include <stdio.h>

int main() {
    int choice;
    printf("Choose an option (1-4):\n");
    printf("1. Check if a number is even or odd\n");
    printf("2. Assign grade based on marks\n");
    printf("3. Select a number (1-3) to see a message\n");
    printf("4. Use ternary operator to check if a number is less than 10\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            int number;
            printf("Enter a number: ");
            scanf("%d", &number);
            if (number % 2 == 0) {
                printf("The number %d is even\n", number);
            } else {
                printf("The number %d is odd\n", number);
            }
            break;
        }
        case 2: {
            int marks;
            printf("Enter your marks: ");
            scanf("%d", &marks);
            if (marks >= 90) {
                printf("Grade: A\n");
            } else if (marks >= 75) {
                printf("Grade: B\n");
            } else if (marks >= 60) {
                printf("Grade: C\n");
            } else {
                printf("Grade: D\n");
            }
            break;
        }
        case 3: {
            int num;
            printf("Enter a number (1-3): ");
            scanf("%d", &num);
            switch (num) {
                case 1:
                    printf("You selected one\n");
                    break;
                case 2:
                    printf("You selected two\n");
                    break;
                case 3:
                    printf("You selected three\n");
                    break;
                default:
                    printf("Invalid choice\n");
            }
            break;
        }
        case 4: {
            int num;
            printf("Enter a number: ");
            scanf("%d", &num);
            (num < 10) ? printf("Number is less than 10\n") : printf("Number is not less than 10\n");
            break;
        }
        default:
            printf("Invalid option selected.\n");
    }

    return 0;
}