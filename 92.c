#include <stdio.h>

int main() {
    int n, max, *p;
    scanf("%d", &n);
    int arr[n];
    for (p = arr; p < arr + n; p++) 
    {
        scanf("%d", p);
    }    
    max = *arr;
    for (p = arr; p < arr + n; p++) 
    {
        if (*p > max) 
        {
            max = *p;
        }  
    }      
    printf("Max: %d\n", max);
    return 0;
}