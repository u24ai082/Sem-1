#include <stdio.h>

void exchange(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int x, y;
    printf("Enter value for x: ");
    scanf("%d", &x);
    printf("Enter value for y: ");
    scanf("%d", &y);
    exchange(&x, &y);
    printf("After exchange, x = %d and y = %d\n", x, y);
    return 0;
}