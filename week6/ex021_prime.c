#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int isPrime = 1;
    int divisor = 0;
    for (int i = 2; i < n; i++)
        if (n % i == 0) {
            isPrime = 0;
            divisor = i;
            break;
        }
    if (isPrime && n > 1)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.(divisible by %d)\n", n, divisor);
    return 0;
}