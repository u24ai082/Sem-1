#include <stdio.h>

void mergeArrays(int A[], int n, int B[], int m, int C[]) {
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (A[i] < B[j]) C[k++] = A[i++];
        else C[k++] = B[j++];
    }
    while (i < n) C[k++] = A[i++];
    while (j < m) C[k++] = B[j++];
}

int main() {
    int A[] = {1, 3, 5}, B[] = {2, 4, 6};
    int n = sizeof(A) / sizeof(A[0]), m = sizeof(B) / sizeof(B[0]);
    int C[n + m];

    mergeArrays(A, n, B, m, C);

    for (int i = 0; i < n + m; i++) printf("%d ", C[i]);
    return 0;
}