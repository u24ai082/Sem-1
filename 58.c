#include <stdio.h>

int main() 
{
    int arr1[10], arr2[10], arr3[10], i;

    for (i = 0; i < 10; i++) {
        printf("Enter element %d for first array: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < 10; i++) {
        printf("Enter element %d for second array: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < 10; i++) {
        arr3[i] = arr1[i] + arr2[i];
    }

    printf("\nThe resulting array after addition is:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}