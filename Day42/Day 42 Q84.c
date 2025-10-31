// Q84: Write a C program to convert a string to uppercase without using built-in functions.

// PROGRAM:

#include <stdio.h>

int main() {
    char str[100];
    
    // Input the string
    scanf("%[^\n]", str);
    
    // Convert to uppercase manually
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // Convert to uppercase
        }
    }
    
    // Print the converted string
    printf("%s", str);
    
    return 0;
}
