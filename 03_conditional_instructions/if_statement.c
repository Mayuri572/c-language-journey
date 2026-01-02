#include <stdio.h>

int main(){
    int a, b;
    printf("Enter a number\n");
    scanf("%d ", &a);

    if(a%2==0){
        printf("The number %d is even\n", a);
    }
    return 0;
}