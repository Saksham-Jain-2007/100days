// Q81: Write a C program to count the number of characters in a string without using built-in functions.

// PROGRAM:

#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    // Input string
    gets(str); // (Note: gets() is unsafe; for safe input use fgets() in practice)

    // Counting characters manually
    while (str[count] != '\0') {
        count++;
    }

    // Output the count
    printf("%d", count);

    return 0;
}
