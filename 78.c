#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num, sum = 0, n = 0, temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }
    temp = num;
    while (temp != 0) {
        sum += pow(temp % 10, n);
        temp /= 10;
    }
    return sum == original;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }
    return 0;
}