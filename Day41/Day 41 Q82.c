// Q82: Write a C program to print each character of a string on a new line.

// PROGRAM:

#include <stdio.h>

int main() {
    char str[100];
    
    // Input the string
    scanf("%[^\n]", str);
    
    // Print each character on a new line
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }
    
    return 0;
}
