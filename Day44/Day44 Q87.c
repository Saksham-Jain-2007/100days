// Q87: Write a C program to count the number of spaces, digits, and special characters in a string.

// PROGRAM:

#include <stdio.h>

int main() {
    char str[100];
    int spaces = 0, digits = 0, special = 0;

    // Input the string
    scanf("%[^\n]", str);

    // Traverse each character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if (!((str[i] >= 'a' && str[i] <= 'z') ||
                   (str[i] >= 'A' && str[i] <= 'Z')))
            special++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);

    return 0;
}
