// Q50: Write a program to print the following pattern:
 // *****
 //  ****
 //   ***
 //    **
 //     *
 
 // PROGRAM:

#include <stdio.h>

int main() {
    int i, j, space;
    for(i = 0; i < 5; i++) {
        for(space = 0; space < i; space++) {
            printf(" ");
        }
        for(j = 0; j < 5 - i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}