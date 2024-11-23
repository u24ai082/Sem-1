#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

void readStudents(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }
}

void displayHighScorers(struct Student students[], int n) {
    printf("Students with marks greater than 500:\n");
    for (int i = 0; i < n; i++) {
        if (students[i].marks > 500) {
            printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
        }
    }
}

int main() {
    struct Student students[10];
    readStudents(students, 10);
    displayHighScorers(students, 10);
    return 0;
}