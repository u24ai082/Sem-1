#include <stdio.h>

int main() {
    int num = 10, *ptr = &num;
    printf("Original Value: %d\n", num);
    *ptr = 20;
    printf("Modified Value: %d\n", num);
    return 0;
}