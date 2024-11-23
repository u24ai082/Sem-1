#include <stdio.h>
#include <string.h>

int findLength(char str[]) {
    return strlen(str);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("The length of the string is %d\n", findLength(str) - 1); // -1 to ignore newline
    return 0;
}