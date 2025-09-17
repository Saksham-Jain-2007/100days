// Q45: Write a program to calculate the approximate value of the series 2/3 + 4/7 + 6/11 + ... up to n terms.
 
 // PROGRAM:

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    int numerator = 2, denominator = 3;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;
        denominator += 4;
    }

    printf("Approximate sum: %.2f\n", sum);

    return 0;
}
