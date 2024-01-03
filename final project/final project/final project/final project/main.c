#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void generateRandomAnswer(char *answer);
void displayGameStats(int attempts);

int main() {



}
// 產生隨機答案
void generateRandomAnswer(char *answer) {
    for (int i = 0; i < 4; i++) {
        answer[i] = rand() % 10 + '0';  // 產生 '0' 到 '9' 之間的隨機數字
    }
    answer[4] = '\0';  // 字串結尾
}

// 顯示遊戲統計信息
void displayGameStats(int attempts) {
    printf("遊戲統計：\n");
    printf("總嘗試次數：%d\n", attempts);
}
