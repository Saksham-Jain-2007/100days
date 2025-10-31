// Q98: Write a C program to print the initials of a given full name except the surname.

 // PROGRAM:

#include <stdio.h>

int main() {
    char str[100];
    int i, lastSpace = -1;

    // Input the full name
    scanf("%[^\n]", str);

    // Find the last space (before surname)
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            lastSpace = i;
    }

    // Print initials for all words except the last one (surname)
    if (str[0] != ' ')
        printf("%c.", str[0]);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && i < lastSpace && str[i + 1] != '\0' && str[i + 1] != ' ')
            printf("%c.", str[i + 1]);
    }

    // Print the surname
    if (lastSpace != -1)
        printf(" %s", &str[lastSpace + 1]);

    return 0;
}
