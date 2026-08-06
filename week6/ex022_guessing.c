#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int target = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    do
    {
        printf("Enter your guess (1-100): ");
        scanf("%d", &guess);
        attempts++;

        if (guess < target) {
            printf("Too low!\n");
        } else if (guess > target) {
            printf("Too high!\n");
        }
    } while (guess != target);

    printf("Correct! You guessed it in %d attempts\n", attempts);
    return 0;
}