#include <stdio.h>

int main() {
    char str[] = "Hello World", *p = str;
    int vowels = 0;
    while (*p) {
        if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u' || 
            *p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U') vowels++;
        p++;
    }
    printf("Vowels: %d\n", vowels);
    return 0;
}