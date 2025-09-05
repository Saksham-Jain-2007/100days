// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

// PROGRAM:

#include<stdio.h>
int main(){
    int a,b,sum,diff,prod,quot;
    printf("Enter two numbers: ");
    scanf("%d,%d",&a,&b);
    sum=a+b;
    diff=a-b;
    prod=a*b;
    quot=a/b;
    printf("The sum of %d and %d is %d\n",a,b,sum);
    printf("The difference when %d is subtracted from %d is %d\n",b,a,diff);
    printf("The product of %d and %d is %d\n",a,b,prod);
    printf("The quotient when %d is divided by %d is %d\n",a,b,quot);
    return 0;
}