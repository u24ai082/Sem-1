#include <stdio.h>
#include <string.h>

void permute(char *str, int l, int r) {
    if (l == r) printf("%s\n", str);
    else {
        for (int i = l; i <= r; i++) {
            char temp = str[l];
            str[l] = str[i];
            str[i] = temp;
            permute(str, l + 1, r);
            str[i] = str[l];
            str[l] = temp;
        }
    }
}

int main() {
    char str[] = "ABC";
    permute(str, 0, strlen(str) - 1);
    return 0;
}