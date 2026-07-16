#include <stdio.h>
#include <math.h>
int main() {
    int seconds;
    int minutes;
    int hours;

    printf("Input: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = seconds % 60;

    printf("Output: %d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}