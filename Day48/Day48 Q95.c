// Q95: Write a C program to check whether one string is a rotation of another string.

 // PROGRAM:

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], concat[200];
    
    // Input the two strings
    scanf("%s", str1);
    scanf("%s", str2);
    
    // Check if lengths are equal
    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation");
        return 0;
    }

    // Create a concatenated string str1+str1
    strcpy(concat, str1);
    strcat(concat, str1);

    // Check if str2 is a substring of concat
    if (strstr(concat, str2) != NULL)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
