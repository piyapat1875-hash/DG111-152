#include <stdio.h>
#include <string.h>
int main() {
    int item;
    int price;
    int gold = 150;
    int remaining_gold;
    char selected_item[20];
    int health_potion = 50;
    int mana_potion = 80;
    int iron_sword = 500;
    int leather_armor = 300;
    char status[50];

    printf("=== ITEM SHOP ===\n");
    printf("Gold: %d\n", gold);
    printf("1. Health Potion - 50 Gold (+50 HP)\n");
    printf("2. Mana Potion - 80 Gold (+30 MP)\n");
    printf("3. Iron Sword - 500 Gold (+20 ATK)\n");
    printf("4. Leather Armor - 300 Gold (+15 DEF)\n");
    printf("5. Exit\n");

    printf("Select an item: ");
    scanf("%d", &item);

    switch (item) {
        case 1: 
            if (gold < health_potion) {
                printf("Not enough gold to purchase Health Potion.\n");
                return 1;
            }
            remaining_gold = gold - health_potion;
            strcpy(selected_item, "Health Potion");
            strcpy(status, "HP Bonus: +50");
            price = health_potion;
            break;
        case 2:
            if (gold < mana_potion) {
                printf("Not enough gold to purchase Mana Potion.\n");
                return 1;
            }
            remaining_gold = gold - mana_potion;
            strcpy(selected_item, "Mana Potion");
            strcpy(status, "MP Bonus: +30");
            price = mana_potion;
            break;
        case 3:
            if (gold < iron_sword) {
                printf("Not enough gold to purchase Iron Sword.\n");
                return 1;
            }
            remaining_gold = gold - iron_sword;
            strcpy(selected_item, "Iron Sword");
            strcpy(status, "ATK Bonus: +20");
            price = iron_sword;
            break;
        case 4:
            if (gold < leather_armor) {
                printf("Not enough gold to purchase Leather Armor.\n");
                return 1;
            }
            remaining_gold = gold - leather_armor;
            strcpy(selected_item, "Leather Armor");
            strcpy(status, "DEF Bonus: +15");
            price = leather_armor;
            break;
        default:
            printf("Exit\n");
            return 1;
    }

    printf("=== Purchase ===\n");
    printf("%s : - %d gold", selected_item, price);
    printf("\nRemaining Gold: %d\n", remaining_gold);
    printf("Status: %s\n", status);
    printf("Item purchased successfully! ✓\n");

    return 0;
}