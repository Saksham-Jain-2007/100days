// Q7: Write a program to swap two numbers without using a third variable.

// PROGRAM:

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d,%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping, first number is %d and second number is %d\n",a,b);
    return 0;
}
