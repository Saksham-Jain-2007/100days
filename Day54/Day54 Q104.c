// Q104: Write a C program to find the pivot integer in a given range of 1 to n.

// PROGRAM:

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int totalSum = n * (n + 1) / 2;  // Sum of 1 to n

    for (int x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2;        // Sum of 1 to x
        int rightSum = totalSum - leftSum + x; // Sum of x to n
        if (leftSum == rightSum) {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");
    return 0;
}
