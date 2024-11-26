#include <stdio.h>
#define BIGGEST(x, y) ((x) > (y) ? (x) : (y))

int main() {
    int a = 10, b = 20;
    printf("Biggest: %d\n", BIGGEST(a, b));
    return 0;
}