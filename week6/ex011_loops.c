#include <stdio.h>
int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
       sum += i;
    }
    printf("Sum: %d\n", sum);

    int j =0;
    int sum2 = 0;
    while (j <= 10) {
        sum2 += j;
        j++;
    }
    printf("Sum: %d\n", sum2);

    int k = 0;
    int sum3 = 0;
    do{
        sum3 += k;
        k++;
    } while (k <= 10);
    printf("Sum: %d\n", sum3);

    return 0;
}