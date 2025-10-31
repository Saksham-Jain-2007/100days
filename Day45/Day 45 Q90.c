// Q90: Write a C program to toggle the case of each character in a string without using built-in functions.

// PROGRAM:

#include <stdio.h>

int main() {
    char str[100];
    
    // Input the string
    scanf("%[^\n]", str);
    
    // Toggle case for each character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;   // Convert lowercase to uppercase
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;   // Convert uppercase to lowercase
    }
    
    // Print the modified string
    printf("%s", str);
    
    return 0;
}
