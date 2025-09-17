// Q56: Write a program to read and print elements of a one-dimensional array.

 // PROGRAM:

#include <stdio.h>

int main() {
    int n, i;
    
    // Read size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];  // Declare array
    
    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Print elements
    printf("Array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
    
    return 0;
}
