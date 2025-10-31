// Q83: Write a C program to count the number of vowels and consonants in a string.

// PROGRAM:

#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    
    // Input the string
    scanf("%[^\n]", str);
    
    // Traverse the string
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        
        // Check for alphabets
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // Convert to lowercase for easy checking
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                vowels++;
            else
                consonants++;
        }
    }
    
    printf("Vowels=%d, Consonants=%d", vowels, consonants);
    
    return 0;
}
