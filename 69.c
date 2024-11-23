#include <stdio.h>

int main() {
    int arr[10], search, i, found = 0;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &search);

    for (i = 0; i < 10; i++) {
        if (arr[i] == search) {
            found = 1;
            printf("Element %d found at index %d.\n", search, i);
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}