// Q86: Write a C program to check whether a given string is a palindrome or not without using built-in functions.

// PROGRAM:

#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i, isPalindrome = 1;

    // Input the string
    scanf("%[^\n]", str);

    // Find the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Check palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
