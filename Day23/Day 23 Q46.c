// Q46: Write a program to print a 5x5 square pattern of asterisks (*).
 
 // PROGRAM:

#include <stdio.h>

int main() {
    int i, j;
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}