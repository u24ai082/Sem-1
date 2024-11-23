#include <stdio.h>

int main() {
    int marks[10][3] = {
        {85, 90, 88}, {78, 85, 84}, {90, 92, 89}, {87, 88, 85},
        {76, 78, 80}, {91, 93, 92}, {85, 80, 79}, {89, 84, 83},
        {92, 95, 94}, {88, 86, 85}};
    int total[10] = {0}, highestSubject[3] = {0}, highestTotal = 0;
    int topStudent = 0, topSubject[3] = {0};

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 3; j++) {
            total[i] += marks[i][j];
            if (marks[i][j] > highestSubject[j]) {
                highestSubject[j] = marks[i][j];
                topSubject[j] = i + 1;
            }
        }
        if (total[i] > highestTotal) {
            highestTotal = total[i];
            topStudent = i + 1;
        }
    }

    for (int i = 0; i < 10; i++) printf("Roll No %d: Total Marks = %d\n", i + 1, total[i]);
    for (int i = 0; i < 3; i++) printf("Highest in Subject %d: %d by Roll No %d\n", i + 1, highestSubject[i], topSubject[i]);
    printf("Top Student: Roll No %d with %d marks\n", topStudent, highestTotal);
    return 0;
}