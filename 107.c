#include <stdio.h>
#include <math.h>

int flip(int num, int n) {
    int divisor = pow(10, n), remainder = num % divisor;
    int reversed = 0;
    while (remainder > 0) {
        reversed = reversed * 10 + remainder % 10;
        remainder /= 10;
    }
    return (num / divisor) * divisor + reversed;
}

int main() {
    printf("%d\n", flip(12345, 3));
    return 0;
}