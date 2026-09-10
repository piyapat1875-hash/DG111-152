#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n;

    // รับจำนวนข้อมูล
    printf("n: ");
    scanf("%d", &n);

    // รับข้อมูลใน Array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // แสดงข้อมูลก่อนเรียง
    printf("Before: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Bubble Sort — Nested Loop 2 ชั้น
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {

            // ถ้าตัวซ้ายมากกว่าตัวขวา ให้สลับตำแหน่ง
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    
    printf("After: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
