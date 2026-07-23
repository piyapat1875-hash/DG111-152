#include <stdio.h>
int score;

int main() {
    printf("Enter your score: ");
    scanf("%d", &score);
    
    if (score >= 80) {
        printf("score: %d → Grade: A (4.0) — Pass\n", score);
    } else if (score >= 75) {
        printf("score: %d → Grade: B+ (3.5) — Pass\n", score);
    } else if (score >= 70) {
        printf("score: %d → Grade: B (3.0) — Pass\n", score);
    } else if (score >= 65) {
        printf("score: %d → Grade: C+ (2.5) — Pass\n", score);
    } else if (score >= 60) {
        printf("score: %d → Grade: C (2.0) — Pass\n", score);
    } else if (score >= 55) {
        printf("score: %d → Grade: D+ (1.5) — Pass\n", score);
    } else if (score >= 50) {
        printf("score: %d → Grade: D (1.0) — Pass\n", score);
    } else {
        printf("score: %d → Grade: F (0.0) — Fail\n", score);
    }

    return 0;
}