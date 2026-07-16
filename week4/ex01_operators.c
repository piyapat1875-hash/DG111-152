#include <stdio.h>
#include <math.h>
int main() {
    printf("\n1.1\n");
    int A ;
    A = 10/3;
    printf("A = %d\n", A);

    float B ;
    B = 10.0/3;
    printf("B = %f\n", B);

    float C ;
    C = (float)10/3;
    printf("C = %f\n", C);

    int D ;
    D = 10%3;
    printf("D = %d\n", D);

    int E ;
    E = -7%3;
    printf("E = %d\n", E);

    int F ;
    F = 7%-3;
    printf("F = %d\n", F);

    printf("\n1.2\n");
    int x = 5;
    printf("x++ = %d\n", x++);
    printf("x = %d\n", x);
    x = 5;
    printf("++x = %d\n", ++x);
    printf("x = %d\n", x);

    printf("\n1.3\n");
    printf("2 + 3 * 4 = %d\n", 2 + 3 * 4);
    printf("(2 + 3) * 4 = %d\n", (2 + 3) * 4);
    printf("10 - 2 - 3 = %d\n", 10 - 2 - 3);
    printf("2*3 + 4*5 = %d\n", 2 * 3 + 4 * 5);
    return 0;
}