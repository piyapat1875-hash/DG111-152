#include <stdio.h>
int main() {
    for (int row = 1; row <= 5; row++) {
        for (int col = 1; col <= row; col++) {
            printf("*");
        }
        printf("\n");
    }

    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n; col++) {
            printf("*");
        }
        printf("\n");
    }


    int m;
    printf("Enter m: ");
    scanf("%d", &m);
    for (int row = 1; row <= m; row++) {
        for (int col = 1; col <= m - row; col++) {
            printf(" ");

        }
        for (int col = 1; col <= 2*row - 1; col++) {
            printf("*");
        }
        printf("\n");
    }
    for (int row = 1; row <= m; row++) {
        for (int col = 1; col <=  row ; col++) {
            printf(" ");
        }
        for (int col = 1; col <=2 * (m-row )-1; col++) {
            printf("*");
        }
        
        
        printf("\n");
    }
    
    return 0;
}