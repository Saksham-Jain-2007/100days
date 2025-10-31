// Q92: Write a C program to find the first repeating character in a string of lowercase letters.

// PROGRAM:

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0}; // to store frequency of lowercase letters
    char result = '\0';

    // Input the string
    scanf("%[^\n]", str);

    // Traverse the string
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Consider only lowercase alphabets
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;

            // If a letter appears again, it's the first repeating one
            if (freq[ch - 'a'] == 2) {
                result = ch;
                break;
            }
        }
    }

    if (result != '\0')
        printf("%c", result);
    else
        printf("No repeating character");

    return 0;
}
