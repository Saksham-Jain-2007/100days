// Q10: Write a program to convert seconds into hours, minutes and seconds.
 
 // PROGRAM:

#include<stdio.h>
int main(){
    int sec,min,hr;
    printf("Enter time in seconds: ");
    scanf("%d",&sec);
    hr=sec/3600;
    min=(sec%3600)/60;
    sec=sec%60;
    printf("The time is %d hours, %d minutes and %d seconds\n",hr,min,sec);
    return 0;
}