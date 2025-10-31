// Q85: Write a C program to print a string in reverse without using built-in functions.

// PROGRAM:

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    // Input the string
    scanf("%[^\n]", str);

    // Find the length manually
    while (str[length] != '\0') {
        length++;
    }

    // Print the string in reverse
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
