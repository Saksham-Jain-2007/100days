// Q96: Write a C program to reverse each word in a given sentence without changing the word order.

// PROGRAM:

#include <stdio.h>

int main() {
    char str[200];
    int start = 0, end = 0;

    // Input the sentence
    scanf("%[^\n]", str);

    // Traverse the string
    while (1) {
        // Move until space or end of string
        if (str[end] != ' ' && str[end] != '\0') {
            end++;
        } else {
            // Reverse the current word
            int i = start, j = end - 1;
            while (i < j) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
                i++;
                j--;
            }

            if (str[end] == '\0')
                break; // End of sentence

            // Move to next word
            end++;
            start = end;
        }
    }

    printf("%s", str);
    return 0;
}
