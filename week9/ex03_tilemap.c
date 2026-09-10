#include <stdio.h>

#define ROWS 8
#define COLS 12

// Tile:
// 0 = Floor
// 1 = Wall
// 2 = Water
// 3 = Player Start

int tilemap[ROWS][COLS] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 3, 0, 0, 0, 2, 2, 0, 0, 0, 0, 1},
    {1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 1},
    {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1},
    {1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1},
    {1, 0, 0, 0, 2, 2, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};


// แสดง Tilemap ทั้งหมด
// # = Wall
// . = Floor
// ~ = Water
// @ = Player
void draw(int playerCol, int playerRow)
{
    for (int i = 0; i < ROWS; i++) {

        // วนแต่ละ Column
        for (int j = 0; j < COLS; j++) {

            // ตำแหน่งของ Player
            if (i == playerRow && j == playerCol) {
                printf("@");
            }

            // Tile 1 = Wall
            else if (tilemap[i][j] == 1) {
                printf("#");
            }

            // Tile 2 = Water
            else if (tilemap[i][j] == 2) {
                printf("~");
            }

            // Tile 0 หรือ 3 = Floor
            else {
                printf(".");
            }
        }

        // ขึ้นบรรทัดใหม่เมื่อจบ Row
        printf("\n");
    }
}


int main()
{
    // ตำแหน่งเริ่มต้นของ Player
    int playerCol = 1;
    int playerRow = 1;

    char move;

    // Game Loop
    while (1) {

        // แสดงแผนที่
        draw(playerCol, playerRow);

        // รับคำสั่งจากผู้เล่น
        printf("Move [wasd] or Quit [q]: ");
        scanf(" %c", &move);

        // กด q เพื่อออกจากเกม
        if (move == 'q') {
            break;
        }

        // ตำแหน่งถัดไป เริ่มจากตำแหน่งปัจจุบัน
        int nextCol = playerCol;
        int nextRow = playerRow;

        // W = ขึ้น
        if (move == 'w') {
            nextRow--;
        }

        // S = ลง
        if (move == 's') {
            nextRow++;
        }

        // A = ซ้าย
        if (move == 'a') {
            nextCol--;
        }

        // D = ขวา
        if (move == 'd') {
            nextCol++;
        }

        // ตรวจสอบ Collision
        // สามารถเดินได้ถ้าปลายทางไม่ใช่ Wall
        if (tilemap[nextRow][nextCol] != 1) {
            playerCol = nextCol;
            playerRow = nextRow;
        }
    }

    return 0;
}
