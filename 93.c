#include <stdio.h>

int main() {
    char str[] = "Hello world pointer example", *p = str;
    int words = 0;
    while (*p) {
        if (*p != ' ' && (p == str || *(p - 1) == ' ')) words++;
        p++;
    }
    printf("Words: %d\n", words);
    return 0;
}