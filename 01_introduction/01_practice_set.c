// Practice Set - Chapter 1

#include <stdio.h>



int main(){
    //Q1: Write a program to calculate the area of a rectangle with length 3 and breadth 8.

    int length = 3, breadth = 8;
    int area = length*breadth;
    printf("Area of rectangle: %d\n", area);

    //Q2: Write a program to calculate the area of a rectangle taking length and breadth as input from the user.
    
    int l, b, a;
    printf ("Enter length and breath of rectangle:");
    scanf("%d  %d", &l , &b);
    a = l*b;
    printf("Area of rectangle: %d\n", a);

    //Q3: calculate the area of a circle taking radius as input from the user.

    float r, area_circle;
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    area_circle = 3.14*r*r;
    printf("Area of circle: %.2f\n", area_circle);

    //Q4: calculate the volume of a cylinder taking height as input from the user.

    float h, volume_cylinder;
    printf("Enter height of cylinder: ");
    scanf("%f", &h);
    volume_cylinder = 3.14*r*r*h;
    printf("Volume of cylinder: %.2f\n", volume_cylinder);

    //Q5: convert temperature from Celsius to Fahrenheit.

    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");   
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperature in Fahrenheit: %f\n", fahrenheit);

    //Q6:to calculate simple interest taking principal, rate of interest and time from the user.

    float principal, rate, time, simple_interest;
    printf("Enter principal, rate of interest and time: ");
    scanf("%f %f %f", &principal, &rate, &time);
    simple_interest = (principal * rate * time) / 100;
    printf("Simple Interest: %f\n", simple_interest);
    



    return 0;
}
