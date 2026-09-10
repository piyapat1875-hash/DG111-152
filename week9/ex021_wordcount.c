#include <stdio.h>

#define MAX_LEN 200


// 2.1: Word Counter
int wordCount(const char* str) {
    int count = 0;
    int inWord = 0;

    while (*str) {

        // ถ้าเป็นช่องว่าง, Tab หรือขึ้นบรรทัดใหม่
        if (*str == ' ' || *str == '\t' || *str == '\n') {
            inWord = 0;
        }

        // ถ้าเจอตัวอักษรตัวแรกของคำ
        else if (!inWord) {
            inWord = 1;
            count++;
        }

        str++;
    }

    return count;
}


int main() {
    char text[MAX_LEN];

    // รับข้อความจากผู้ใช้
    printf("Enter text (spaces allowed): ");
    fgets(text, MAX_LEN, stdin);

    /*
     * fgets() จะเก็บ '\n' ที่ผู้ใช้กด Enter ไว้ด้วย
     * จึงต้องหา '\n' แล้วเปลี่ยนเป็น '\0'
     * โดยไม่ใช้ <string.h>
     */

    int len = 0;

    // หาความยาวของ String
    while (text[len] != '\0') {
        len++;
    }

    // ลบ '\n' ตัวสุดท้ายออก
    if (len > 0 && text[len - 1] == '\n') {
        text[len - 1] = '\0';
    }

    // แสดงผลจำนวนคำ
    printf("wordCount(\"%s\") = %d\n", text, wordCount(text));

    return 0;
}
