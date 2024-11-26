#include <stdio.h>

int main() {
    char str[] = "Hello World", *p = str;
    int total = 0, non_space = 0;
    while (*p) {
        total++;
        if (*p != ' ') 
        {
            non_space++;
        }    
        p++;
    }
    printf("Total: %d, Non-space: %d\n", total, non_space);
    return 0;
}