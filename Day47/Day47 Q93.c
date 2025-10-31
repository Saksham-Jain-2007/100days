// Q93: Write a C program to check whether two strings are anagrams of each other or not.

 // PROGRAM:

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq[26] = {0};
    int i;

    // Input the two strings
    scanf("%s", str1);
    scanf("%s", str2);

    // Count frequency of each letter in str1
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z')
            freq[str1[i] - 'a']++;
        else if (str1[i] >= 'A' && str1[i] <= 'Z')
            freq[str1[i] - 'A']++;
    }

    // Decrease frequency for each letter in str2
    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] >= 'a' && str2[i] <= 'z')
            freq[str2[i] - 'a']--;
        else if (str2[i] >= 'A' && str2[i] <= 'Z')
            freq[str2[i] - 'A']--;
    }

    // Check if all frequencies are zero
    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}
