#include <stdio.h>
int main() {
    printf("=== ITEM SHOP ===\n");
    printf("Gold: 1,000\n");
    printf("1. Health Potion - 50 Gold (+50 HP)\n");
    printf("2. Mana Potion - 80 Gold (+30 MP)\n");
    printf("3. Sword - 500 Gold (+20 Attack)\n");
    printf("4. Leather Armor - 300 Gold (+15 DEF)\n");
    printf("5. Checkout\n");

    int selection;
    int total = 0;
    _Bool boughtSword = 0, boughtArmor = 0;
    int gold = 1000;
    do {
    printf("Select item: ");
    scanf("%d", &selection);
    switch (selection) {
        case 1:
            if (total + 50 > gold) printf("Not enough Gold!\n");
         else { total += 50; }
         break;
        case 2:
            if (total + 80 > gold) printf("Not enough Gold!\n");
         else { total += 80; }
         break;
        case 3:
            if (total + 500 > gold) printf("Not enough Gold!\n");
         else { total += 500; boughtSword = 1; }
         break;
        case 4:
        if (total + 300 > gold) printf("Not enoughGold!\n");
        else { total += 300; boughtArmor = 1; }
        break;

}
} while (selection != 5);
printf("=== Checkout ===\n");
    if (boughtSword && boughtArmor) {
    total = total * 90 / 100; 
    printf("Warrior Bundle! (-10%%)\n");
 }
 printf("Total paid: %d Gold\n", total);
 printf("Remaining: %d Gold\n", gold - total);
    return 0;
}