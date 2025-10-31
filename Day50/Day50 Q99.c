// Q99: Write a C program to convert a date from dd/04/yyyy format to dd-Apr-yyyy format.

 // PROGRAM:

#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    char day[3], month[3], year[5];
    char monthName[12][4] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    int m;

    // Input date in dd/mm/yyyy format
    scanf("%s", date);

    // Extract day, month, and year parts
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strcpy(year, date + 6);

    // Convert month string to integer
    sscanf(month, "%d", &m);

    // Print in required format
    printf("%s-%s-%s", day, monthName[m - 1], year);

    return 0;
}
