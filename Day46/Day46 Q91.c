// Q91: Write a C program to remove all vowels from a given string without using built-in functions.

// PROGRAM:

#include <stdio.h>

int main() {
    char str[100], result[100];
    int j = 0;
    
    // Input the string
    scanf("%[^\n]", str);
    
    // Copy only non-vowel characters to result
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            result[j++] = ch;
        }
    }
    
    result[j] = '\0';  // End the new string
    
    printf("%s", result);
    
    return 0;
}
