#include <stdio.h>
int main() {

int age ;
float gpa ;
char name[100];
char favorite_subject[100];
printf("=== Enter Data ===:\n");
printf("Name: ");
scanf("%s", name);
printf("Age: ");
scanf("%d", &age);
printf("GPA: ");
scanf("%f", &gpa);
printf("Favorite Subject: ");
scanf("%s", favorite_subject);

printf("\n=== Personal Card ===\n");
printf("┌───────────────────────────────┐\n");
printf("│");
printf(" name\t \t: %-*s│\n", 14, name);

printf("│ age\t \t: %-*d│\n", 14, age);

printf("│ GPA\t \t: %-*.*f│\n", 14, 2, gpa);

printf("│ Favorite Subject: %-*s│\n", 12, favorite_subject);
printf("└───────────────────────────────┘\n");

return 0;
}