#include <stdio.h>

int main() {
    FILE *file = fopen("text.txt", "r");
    if (!file) return 1;
    char ch;
    int vowels = 0;
    while ((ch = fgetc(file)) != EOF) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') vowels++;
    }
    fclose(file);
    printf("Vowels: %d\n", vowels);
    return 0;
}