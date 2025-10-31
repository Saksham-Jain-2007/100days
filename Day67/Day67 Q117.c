// Q117: Write a C program to merge two sorted arrays into a single sorted array.

 // PROGRAM:

#include <stdio.h>

int main() {
    int m, n;
    scanf("%d", &m);
    int nums1[m];
    for (int i = 0; i < m; i++)
        scanf("%d", &nums1[i]);
    
    scanf("%d", &n);
    int nums2[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums2[i]);
    
    int merged[m + n];
    int i = 0, j = 0, k = 0;
    
    // Merge process
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j])
            merged[k++] = nums1[i++];
        else
            merged[k++] = nums2[j++];
    }
    
    // Copy remaining elements
    while (i < m)
        merged[k++] = nums1[i++];
    while (j < n)
        merged[k++] = nums2[j++];
    
    // Print merged array
    for (int x = 0; x < m + n; x++) {
        printf("%d", merged[x]);
        if (x < m + n - 1)
            printf(" ");
    }
    
    return 0;
}
