#include <stdio.h>

int main() {
    int n, max1 = 0, max2 = 0, num;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > max1) {
            max2 = max1;
            max1 = num;
        } else if (num > max2) {
            max2 = num;
        }
    }

    printf("Max1 = %d, Max2 = %d\n", max1, max2);
    return 0;
}