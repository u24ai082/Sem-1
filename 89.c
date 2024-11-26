#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5}, arr2[5], *p1 = arr1, *p2 = arr2;
    for (int i = 0; i < 5; i++) 
    {
        *(p2 + i) = *(p1 + 4 - i);
    }    
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }    
    return 0;
}