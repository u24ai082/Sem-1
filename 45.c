#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int luckyNumber, guess, attempts = 5;

    // Seed the random number generator
    srand(time(0));
    luckyNumber = rand() % 100 + 1;  // Generates a random number between 1 and 100

    printf("Welcome to the Guessing Game!\n");
    printf("You have 5 attempts to guess the lucky number between 1 and 100.\n");

    
    for (int i = 1; i <= attempts; i++) {
        printf("Attempt %d: Enter your guess: ", i);
        scanf("%d", &guess);

        
        if (guess < 1 || guess > 100) {
            printf("Please enter a number between 1 and 100.\n");
        } 
        
        else if (guess < luckyNumber) {
            printf("Too low! Try a higher number.\n");
        } else if (guess > luckyNumber) {
            printf("Too high! Try a lower number.\n");
        } else {
            printf("Congratulations! You guessed the lucky number %d!\n", luckyNumber);
            break;
        }

       
        if (i == attempts && guess != luckyNumber) {
            printf("Sorry, you've used all your attempts! The lucky number was %d.\n", luckyNumber);
        }
    }

    return 0;
}