// Q67: Write a C program to insert an element at a specific position in an array.

 // PROGRAM:

#include <stdio.h>

int main() {
    int n, i, pos, value;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n + 1]; // +1 for new element

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position and element to insert (position starts from 0): ");
    scanf("%d %d", &pos, &value);

    if(pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }

    // Shift elements to the right
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new element
    arr[pos] = value;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
