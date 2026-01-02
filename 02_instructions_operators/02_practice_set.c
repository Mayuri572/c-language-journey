// Practice Set
#include <stdio.h>

int main(){
    //Q1: To check whether a number is divisible by 97 or not.

    int num;
    printf("Enter a numder: ");
    scanf("%d" , &num);
    if (num % 97 == 0){
        printf("%d is divisible by 97\n", num);
    } else {
        printf("%d is not divisible by 97\n", num);
    }   

    //Q2: Step by step evaluation of 3*x/y-z+k where x=2, y=3, z=3, k=1

    int x= 2, y = 3, z = 3, k=1;
    int result = 3*x/y-z+k;
    //3*2/3-3+1
    //6/3-3+1
    //2-3+1
    //-1+1
    //0
    printf("The value of result is %d ", result);

    return 0;

}