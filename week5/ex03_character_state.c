#include <stdio.h>
#include <stdbool.h>
int main() {
    int max_hp;
    int damage_taken;

    bool is_poisoned;
    int temp;
    int attack_count;
    int hp;

    printf("Enter max HP: ");
    scanf("%d", &max_hp);
    printf("Enter damage taken: ");
    scanf("%d", &damage_taken);
    printf("Is the character poisoned? (1 for yes, 0 for no): ");
    scanf("%d", &temp);
    is_poisoned = (temp == 1) ? true : false;
    printf("Enter number of attacks: ");
    scanf("%d", &attack_count);
    hp = max_hp - damage_taken;
    if (hp < 0) hp = 0; 
    
    typedef enum {
        DEAD,
        NORMAL,
        CRITICAL,
        POISONED,
        ULTIMATE
    } CharacterState;

    CharacterState state;
    if (hp <= 0) {
        state = DEAD;
    } else if (hp < max_hp / 4) {
        state = CRITICAL;
    } else if (is_poisoned) {
        state = POISONED;
    } else if (attack_count > 5) {
        state = ULTIMATE;
    } else {
        state = NORMAL;
    }

    switch (state) {
        case DEAD:
            printf("Dead.\n");
            break;
        case NORMAL:
            printf("Normal.\n");
            break;
        case CRITICAL:
            printf("Critical.\n");
            break;
        case POISONED:
            printf("Poisoned.\n");
            break;
        case ULTIMATE:
            printf("Normal + Ultimate\n");
            break;
    }
    return 0;
}