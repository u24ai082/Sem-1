#include <stdio.h>

int main() {
    FILE *file = fopen("LNMIITSTUDENT.DAT", "a");
    if (!file) return 1;
    int roll;
    char name[50];
    float marks;
    scanf("%d %s %f", &roll, name, &marks);
    fprintf(file, "%d %s %.2f\n", roll, name, marks);
    fclose(file);
    return 0;
}