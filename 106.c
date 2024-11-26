#include <stdio.h>

struct Item {
    char name[50];
    int quantity;
    float price, amount;
};

int main() {
    struct Item item;
    scanf("%s %d %f", item.name, &item.quantity, &item.price);
    item.amount = item.quantity * item.price;
    printf("%s %d %.2f %.2f\n", item.name, item.quantity, item.price, item.amount);
    return 0;
}