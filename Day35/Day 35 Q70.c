// Q70: Write a C program to rotate an array to the right by k positions.

// PROGRAM:

#include <stdio.h>

int main() {
    int n, k, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);

    k = k % n; // handle cases when k > n

    // Temporary array to store rotated elements
    int temp[n];

    // Copy last k elements to the beginning of temp
    for(i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Copy the remaining elements
    for(i = 0; i < n - k; i++) {
        temp[k + i] = arr[i];
    }

    // Copy back to original array
    for(i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    printf("Array after rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
