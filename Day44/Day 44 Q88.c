// Q88: Write a C program to replace all spaces in a string with hyphens.

// PROGRAM:

#include <stdio.h>

int main() {
    char str[100];
    
    // Input the string
    scanf("%[^\n]", str);
    
    // Replace spaces with hyphens
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            str[i] = '-';
    }
    
    // Print the modified string
    printf("%s", str);
    
    return 0;
}
