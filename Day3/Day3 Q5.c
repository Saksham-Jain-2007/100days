// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

// PROGRAM:

#include<stdio.h>
int main(){
    float c,f;
    printf("Enter temperature in Celsius: ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("The temperature in Fahrenheit is %.2f\n",f);
    return 0;

}
