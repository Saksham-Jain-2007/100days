// Q9: Write a program to calculate Simple Interest and Compound Interest.
 
 // PROGRAM:

#include<stdio.h>
#include<math.h>
int main(){
    float p,r,t,si,ci;
    printf("Enter principal, rate and time: ");
    scanf("%f,%f,%f",&p,&r,&t);
    si=(p*r*t)/100;
    ci=p*pow((1+r/100),t)-p;
    printf("The Simple Interest is %.2f\n",si);
    printf("The Compound Interest is %.2f\n",ci);
    return 0;


}
