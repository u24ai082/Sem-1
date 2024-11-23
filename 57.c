#include <stdio.h>

int main() {
    int n=10, i, num, max, max2;

    printf("Enter number : ");
    scanf("%d", &num);
    max = num;
    max2 = num;

    for (i = 1; i < n; i++) {
        printf("Enter number : ");
        scanf("%d", &num);

        if (num > max) {
            max2 = max;
            max = num;
        } else if (num > max2 && num < max) {
            max2 = num;
        }
    }

    printf("\nMaximum number = %d\nSecond Maximum number = %d\n", max, max2);

    return 0;
}