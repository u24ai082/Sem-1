#include <stdio.h>

int main() {
    int matrix[3][3], i, j, max, min;

    printf("Enter the elements of a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    max = matrix[0][0];
    min = matrix[0][0];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }

    printf("\nMaximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}