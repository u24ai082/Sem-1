#include <stdio.h>

int main() {
    int arr[10], search, i, count = 0;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to count occurrences: ");
    scanf("%d", &search);

    for (i = 0; i < 10; i++) {
        if (arr[i] == search) {
            count++;
        }
    }

    printf("Element %d occurs %d time(s) in the array.\n", search, count);

    return 0;
}