#include <stdio.h>

struct Employee {
    int emp_num;
    char emp_name[50];
    float basic_pay;
};

int main() {
    struct Employee emp[50], *ptr = emp;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++, ptr++) {
        scanf("%d %s %f", &ptr->emp_num, ptr->emp_name, &ptr->basic_pay);
    }
    ptr = emp;
    for (int i = 0; i < n; i++, ptr++) {
        printf("%d %s %.2f\n", ptr->emp_num, ptr->emp_name, ptr->basic_pay);
    }
    return 0;
}