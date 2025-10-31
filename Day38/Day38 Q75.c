// Q75: Write a C program to add two matrices of size m x n.

 // PROGRAM:

#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2, i, j;

    // Input size of first matrix
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    int a[rows1][cols1];
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input size of second matrix
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    // Check if addition is possible
    if(rows1 != rows2 || cols1 != cols2) {
        printf("Matrix addition not possible. Dimensions must be equal.\n");
        return 0;
    }

    int b[rows2][cols2], sum[rows1][cols1];

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows2; i++) {
        for(j = 0; j < cols2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Add matrices
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print result
    printf("Sum of matrices:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
