// Q73: Write a C program to calculate the sum of each row in a matrix of size m x n.

// PROGRAM:

#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int rowSum[rows];  // array to store row sums

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of each row
    for(i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for(j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    // Print row-wise sums
    printf("Sum of each row:\n");
    for(i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }
    printf("\n");

    return 0;
}
