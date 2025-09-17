// Q41: Write a program to swap the first and last digits of a number.
 
 // PROGRAM:

#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits = 0, temp, swapped;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;

    // Count digits and get first digit
    while(temp != 0) {
        first = temp % 10;
        temp /= 10;
        digits++;
    }

    if(digits == 1) {
        printf("%d\n", num); // Single digit, no swap needed
        return 0;
    }

    // Remove first and last digit from num
    int middle = (num % (int)pow(10, digits - 1)) / 10;

    // Construct swapped number
    swapped = last * (int)pow(10, digits - 1) + middle * 10 + first;

    printf("%d\n", swapped);

    return 0;
}
