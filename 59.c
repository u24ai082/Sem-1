#include <stdio.h>

int main() 
{
    int arr1[10], arr2[10], temp, i;

    for (i = 0; i < 10; i++) {
        printf("Enter element %d for first array: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < 10; i++) {
        printf("Enter element %d for second array: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < 10; i++) {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }

    printf("\nAfter swapping:\n");

    printf("First array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nSecond array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}