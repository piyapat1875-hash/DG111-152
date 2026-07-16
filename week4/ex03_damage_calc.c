#include <stdio.h>
#include <math.h>
int main() {
    int player_attack;
    int enemy_defense;
    int hit_number;
    int base_damage;
    int Critical_damage;
    int enemy_hp = 500;

    printf("Enter player attack value: ");
    scanf("%d", &player_attack);
    printf("Enter enemy defense value: ");
    scanf("%d", &enemy_defense);
    printf("Enter number of hits: ");
    scanf("%d", &hit_number);

    base_damage = player_attack - enemy_defense;
    Critical_damage = (int)ceil((float)base_damage * 1.5f);
    
    if (hit_number % 5 == 0) {
        printf("=== COMBAT SIMULATOR ===\n");
        printf("Player Attack: %d\n", player_attack);
        printf("Enemy Defense: %d\n", enemy_defense);
        printf("Number of Hits: %d\n", hit_number);
        printf("Damage: %d (Critical * 1.5)\n", Critical_damage);
        printf("Enemy HP: %d\n", enemy_hp - Critical_damage);
    } else {
        printf("=== COMBAT SIMULATOR ===\n");
        printf("Player Attack: %d\n", player_attack);
        printf("Enemy Defense: %d\n", enemy_defense);
        printf("Number of Hits: %d\n", hit_number);
        printf("Damage: %d (Normal)\n", base_damage);
        printf("Enemy HP: %d\n", enemy_hp - base_damage);
    }
    return 0;
}