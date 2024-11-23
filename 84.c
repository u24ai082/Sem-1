#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    int pages;
};

void readBook(struct Book *b) {
    printf("Enter title: ");
    scanf("%s", b->title);
    printf("Enter author: ");
    scanf("%s", b->author);
    printf("Enter pages: ");
    scanf("%d", &b->pages);
}

void displayBook(struct Book b) {
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Pages: %d\n", b.pages);
}

int main() {
    struct Book b;
    readBook(&b);
    displayBook(b);
    return 0;
}