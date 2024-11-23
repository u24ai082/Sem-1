#include <stdio.h>

int factorial(int num) {
    int result = 1;
    for (int i = 2; i <= num; i++) {
        result *= i;
    }
    return result;
}

int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    printf("Enter values for n and r: ");
    scanf("%d %d", &n, &r);
    printf("nCr = %d\n", nCr(n, r));
    return 0;
}