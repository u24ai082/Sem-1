#include <stdio.h>

int main() {
    int votes[] = {1, 2, 5, 3, 6, 2, 1, 5, 4, 7};
    int n = sizeof(votes) / sizeof(votes[0]);
    int count[5] = {0}, spoilt = 0;

    for (int i = 0; i < n; i++) {
        if (votes[i] >= 1 && votes[i] <= 5) count[votes[i] - 1]++;
        else spoilt++;
    }

    for (int i = 0; i < 5; i++) printf("Candidate %d: %d votes\n", i + 1, count[i]);
    printf("Spoilt ballots: %d\n", spoilt);
    return 0;
}