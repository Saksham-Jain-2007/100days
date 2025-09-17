// Q37: Write a program to find LCM of two numbers.
 
 // PROGRAM:

#include <stdio.h>

int main() {
    int num1, num2, max, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    max = (num1 > num2) ? num1 : num2;

    while(1) {
        if(max % num1 == 0 && max % num2 == 0) {
            lcm = max;
            break;
        }
        max++;
    }

    printf("%d\n", lcm);

    return 0;
}
