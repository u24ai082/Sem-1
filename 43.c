#include <stdio.h>

int main() {
    float sales, commission;

    // Input the sales amount
    printf("Enter the sales amount: ");
    scanf("%f", &sales);

    if (sales <= 500) {
        commission = sales * 0.05;
    } else if (sales <= 2000) {
        commission = 35 + (sales - 500) * 0.10;
    } else if (sales <= 5000) {
        commission = 185 + (sales - 2000) * 0.12;
    } else {
        commission = sales * 0.125;
    }

    // Output the commission
    printf("Commission to be paid: Rs. %.2f\n", commission);

    return 0;
}