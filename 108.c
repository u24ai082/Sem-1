#include <stdio.h>

void str_copy(char *dest, char *src) {
    while ((*dest++ = *src++));
}

int str_compare(char *s1, char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

void str_concat(char *dest, char *src) {
    while (*dest) dest++;
    while ((*dest++ = *src++));
}

void str_reverse(char *str) {
    char *end = str, temp;
    while (*end) end++;
    end--;
    while (str < end) {
        temp = *str;
        *str++ = *end;
        *end-- = temp;
    }
}

int main() {
    char str1[50] = "Hello", str2[50], str3[50] = "World", str4[50] = "Hello World", str5[50] = "Programming";

    str_copy(str2, str1);
    printf("Copied String: %s\n", str2);

    int result = str_compare(str1, str3);
    if (result == 0)
        printf("Strings are equal.\n");
    else if (result < 0)
        printf("First string is less than the second.\n");
    else
        printf("First string is greater than the second.\n");

    str_concat(str4, str3);
    printf("Concatenated String: %s\n", str4);

    str_reverse(str5);
    printf("Reversed String: %s\n", str5);

    return 0;
}