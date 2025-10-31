// Q89: Write a C program to count the frequency of a character in a string without using built-in functions.

// PROGRAM:

#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0;

    // Input the string
    scanf("%[^\n]", str);
    
    // Clear input buffer (to read next character correctly)
    getchar();
    
    // Input the character to count
    scanf("%c", &ch);

    // Count frequency of the character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }

    printf("%d", count);

    return 0;
}
