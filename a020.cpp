#include <stdio.h>


void ID_Check(char ID[]) {
    // **步驟 1：字母對應的數字轉換表**
    char letter[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int number[26] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};

    int sum = 0, temp = 0;

    // **步驟 2：轉換第一個字母**
    for (int i = 0; i < 26; i++) {
        if (ID[0] == letter[i]) {
            temp = number[i]; // 取得對應數值
            break;
        }
    }

    // **步驟 3：計算第一碼轉換數值的貢獻**
    sum += (temp / 10) + (temp % 10) * 9;

    // **步驟 4：計算權重**
    int weights[] = {8, 7, 6, 5, 4, 3, 2, 1, 1};  // 第 2 碼 ~ 第 10 碼的權重
    for (int i = 1; i < 10; i++) {  // i 從 1 到 9
        sum += (ID[i] - '0') * weights[i - 1];
    }

    // **步驟 5：檢查是否能整除 10**
    if (sum % 10 == 0) {
        printf("real\n");
    } else {
        printf("fake\n");
    }
}




int main() {
    char ID[100];
    while (scanf("%s", ID) != EOF) {
        ID_Check(ID);
    }
    return 0;
}