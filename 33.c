#include <stdio.h>

int main() {
    int n, num, max, min;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &num);
    max = min = num;

    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num > max)
            max = num;
        if (num < min)
            min = num;
    }

    printf("Max = %d, Min = %d\n", max, min);
    return 0;
}