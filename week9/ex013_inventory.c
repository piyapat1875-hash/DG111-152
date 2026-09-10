#include <stdio.h>

#define INVENTORY_SIZE 10
#define EMPTY -1


// เพิ่ม Item ลงใน Inventory
void addItem(int inv[], int itemID) {
    for (int i = 0; i < INVENTORY_SIZE; i++) {

        // หา slot ว่างแรกที่เจอ
        if (inv[i] == EMPTY) {
            inv[i] = itemID;
            return;
        }
    }

    // ถ้าไม่มีช่องว่าง
    printf("Inventory full! Cannot add item %d\n", itemID);
}


// ลบ Item ออกจาก Inventory
void removeItem(int inv[], int itemID) {
    for (int i = 0; i < INVENTORY_SIZE; i++) {

        // หา Item ที่ต้องการลบ
        if (inv[i] == itemID) {
            inv[i] = EMPTY;
            return;
        }
    }
}


// แสดง Item ทั้งหมดใน Inventory
void displayInventory(int inv[]) {
    printf("Inventory: ");

    for (int i = 0; i < INVENTORY_SIZE; i++) {
        if (inv[i] != EMPTY) {
            printf("%d ", inv[i]);
        }
    }

    printf("\n");
}


int main() {
    int inventory[INVENTORY_SIZE];

    // กำหนดให้ทุกช่องว่างตอนเริ่มต้น
    for (int i = 0; i < INVENTORY_SIZE; i++) {
        inventory[i] = EMPTY;
    }

    int choice;
    int itemID;

    // แสดงเมนูจนกว่าผู้ใช้จะเลือก Quit
    do {
        displayInventory(inventory);

        printf("1) Add item\n");
        printf("2) Remove item\n");
        printf("3) Quit\n");

        printf("Choice: ");
        scanf("%d", &choice);

        // เพิ่ม Item
        if (choice == 1) {
            printf("Item ID to add: ");
            scanf("%d", &itemID);

            addItem(inventory, itemID);
        }

        // ลบ Item
        else if (choice == 2) {
            printf("Item ID to remove: ");
            scanf("%d", &itemID);

            removeItem(inventory, itemID);
        }

    } while (choice != 3);

    return 0;
}
