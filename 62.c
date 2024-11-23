#include <stdio.h>

int main() {
    int arr[10], i, start = 0, end = 9, temp;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    printf("Reversed array:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}