#include <stdio.h>
#include <string.h>

void sort(char *arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                char *temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    char *arr[] = {"apple", "orange", "banana", "grape"};
    int n = 4;
    sort(arr, n);
    for (int i = 0; i < n; i++) printf("%s\n", arr[i]);
    return 0;
}