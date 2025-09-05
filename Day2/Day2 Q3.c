// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

// PROGRAM:

#include<stdio.h>
int main(){
    float l,b;
    printf("Enter length and breadth of the rectangle: ");
    scanf("%f,%f",&l,&b);
    printf("The area of the rectangle is %.2f\n",l*b);
    printf("The perimeter of the rectangle is %.2f\n",2*(l+b));
    return 0;
    

}
