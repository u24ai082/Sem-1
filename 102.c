#include <stdio.h>

int main() {
    FILE *file = fopen("text.txt", "r");
    if (!file) return 1;
    char ch;
    int chars = 0, words = 0, lines = 0;
    while ((ch = fgetc(file)) != EOF) {
        chars++;
        if (ch == ' ' || ch == '\n') words++;
        if (ch == '\n') lines++;
    }
    fclose(file);
    printf("Characters: %d, Words: %d, Lines: %d\n", chars, words + 1, lines + 1);
    return 0;
}