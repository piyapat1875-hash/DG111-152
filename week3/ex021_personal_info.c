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
printf("name\t \t: %-20s\n", name);
printf("age\t \t: %-20d\n", age);
printf("GPA\t \t: %.2f\n", gpa);
printf("Favorite Subject: %s\n", favorite_subject);

return 0;
}