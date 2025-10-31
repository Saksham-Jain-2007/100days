// Q64: Write a C program to find the most frequent digit in an integer number.

// PROGRAM:

#include <stdio.h>

int main(){
    long long num;
    int freq[10] = {0};  // to store frequency of digits 0–9
    int digit, maxFreq = 0, mostFrequentDigit = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    // Handle negative numbers
    if(num < 0)
        num = -num;

    // Count frequency of each digit
    while(num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find the digit with the highest frequency
    for(int i = 0; i < 10; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFrequentDigit = i;
        }
    }

    printf("%d\n", mostFrequentDigit);

    return 0;
}
