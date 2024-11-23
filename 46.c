#include <stdio.h>
#include <stdbool.h>

int main() {
    // Declare multidimensional arrays for US and UK hat sizes
    double headSizes[10][2] = {
        {20.5, 6.5}, {21.0, 6.625}, {21.5, 6.75}, {22.0, 7.0}, {22.5, 7.125}, 
        {23.0, 7.25}, {23.5, 7.375}, {24.0, 7.5}, {24.5, 7.625}, {25.0, 7.75}
    };

    double circumference;
    bool sizeFound = false;

    // Get the head circumference in inches from the user
    printf("Enter the circumference of your head in inches: ");
    scanf("%lf", &circumference);

    // Iterate through the array to find the closest size
    for (int i = 0; i < 10; i++) {
        if (circumference == headSizes[i][0]) {
            printf("Your hat size is %.3f\n", headSizes[i][1]);
            sizeFound = true;
            break;
        }
    }

    // If the exact size isn't found, suggest nearby sizes
    if (!sizeFound) {
        printf("Hat size not found for exact circumference. Consider one of the following:\n");
        for (int i = 0; i < 10; i++) {
            if (circumference >= headSizes[i][0] - 0.25 && circumference <= headSizes[i][0] + 0.25) {
                printf("For a circumference of %.3f inches, you could try a hat size of %.3f\n", headSizes[i][0], headSizes[i][1]);
            }
        }
    }

    return 0;
}