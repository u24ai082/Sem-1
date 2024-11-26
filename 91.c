#include <stdio.h>

int main() {
    int num, *p = &num;
    scanf("%d", &num);
    printf("Square: %d, Cube: %d\n", (*p) * (*p), (*p) * (*p) * (*p));
    return 0;
}