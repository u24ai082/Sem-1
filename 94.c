#include <stdio.h>

int main() {
    char str[] = "SVNITJAVA", rev[10], *p1 = str, *p2 = rev;
    p1 += 7;
    while (p1 >= str) *p2++ = *p1--;
    *p2 = '\0';
    printf("%s\n", rev);
    return 0;
}