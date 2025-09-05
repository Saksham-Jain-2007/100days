// Q13: Write a program to check whether a year is a leap year or not.
 
 // PROGRAM:

#include<stdio.h>
int main(){
    int yr;
    printf("Enter a year: ");
    scanf("%d",&yr);
    if((yr%4==0 && yr%100!=0) || (yr%400==0)){
        printf("%d is a leap year.\n",yr);
    }
    else{
        printf("%d is not a leap year.\n",yr);
    }
}
