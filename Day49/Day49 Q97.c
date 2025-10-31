// Q97: Write a C program to print the initials of a given full name.

 // PROGRAM:

#include <stdio.h>

int main() {
    char str[100];
    
    // Input the full name
    scanf("%[^\n]", str);
    
    // Print the first initial (if exists)
    if (str[0] != ' ')
        printf("%c.", str[0]);

    // Print initials after each space
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != '\0' && str[i + 1] != ' ')
            printf("%c.", str[i + 1]);
    }

    return 0;
}
