#include <stdio.h>
int main() {
    int count = 1;
    printf("+---+---+---+---+---+\n");
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= 5; col++) {
            printf("| %d ", count);
            count++;
        }
        printf("|\n");
        printf("+---+---+---+---+---+\n");
    }

    return 0;
}