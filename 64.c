#include <stdio.h>

int main() {
    int matrix[3][3], i, j, rowSum;

    printf("Enter the elements of a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        rowSum = 0;
        for (j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
        }
        printf("Sum of row %d: %d\n", i + 1, rowSum);
    }

    return 0;
}