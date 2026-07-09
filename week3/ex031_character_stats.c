#include <stdio.h>
int main() {

int Max_HP ;
int Attack_Power  ;
int Defense ;
int level ;
int power_score ;
char Character_Name[100];



printf("=== Create Character ===:\n");
printf("Name: ");
scanf("%s", Character_Name);
printf("Max HP: ");
scanf("%d", &Max_HP);
printf("Attack Power: ");
scanf("%d", &Attack_Power);
printf("Defense: ");
scanf("%d", &Defense);
printf("Level: ");
scanf("%d", &level);


printf("\n=== CHARACTER SHEET ===\n");
printf("╔═══════════════════════════════════╗\n");
printf("║ Name         : %-18s ║\n", Character_Name);
printf("╠═══════════════════════════════════╣\n");
printf("║ Level        : %-18d ║\n", level);
printf("║ Max HP       : %-3d / %-5d        ║\n", Max_HP, Max_HP);
printf("║ Attack Power : %-18d ║\n", Attack_Power);
printf("║ Defense      : %-18d ║\n", Defense);
printf("╠═══════════════════════════════════╣\n");
printf("║HP Bar        :██████████ 100%     ║\n");
power_score = Attack_Power * 2 + Defense + Max_HP / 10;
printf("║ Power Score  : %-18d ║\n", power_score);
printf("╚═══════════════════════════════════╝\n");

return 0;
}