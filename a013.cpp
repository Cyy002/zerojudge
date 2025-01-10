#include <stdio.h>
#include <string.h>

#define MAX_LEN 20  // 定義最大字串長度，羅馬數字不會超過 20 個字元

// 將羅馬數字轉換為阿拉伯數字
int roman_to_int(char roman[]) {
    int value[128] = {0};  // 使用 ASCII 陣列來存儲羅馬數字的對應數值
    value['I'] = 1;
    value['V'] = 5;
    value['X'] = 10;
    value['L'] = 50;
    value['C'] = 100;
    value['D'] = 500;
    value['M'] = 1000;

    int len = strlen(roman);  // 取得羅馬數字字串的長度
    int result = 0;  // 存儲轉換後的阿拉伯數字

    // 遍歷字串，將羅馬數字轉換為阿拉伯數字
    for (int i = 0; i < len; i++) {
        // 如果當前數字比後一個數字小，則執行減法規則
        if (i < len - 1 && value[roman[i]] < value[roman[i + 1]]) {
            result -= value[roman[i]];  // 減去當前值（如 IV = 4）
        } else {
            result += value[roman[i]];  // 加上當前值
        }
    }
    return result;  // 返回計算結果
}

// 將阿拉伯數字轉換為羅馬數字
void int_to_roman(int num, char roman[]) {
    // 建立對應的羅馬數字表，數值大的優先匹配
    struct {
        int value;   // 阿拉伯數字
        char *symbol; // 對應的羅馬數字
    } roman_table[] = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"},
        {1, "I"}
    };

    roman[0] = '\0';  // 初始化輸出字串

    // 依序匹配數字範圍，從大到小轉換
    for (int i = 0; num > 0; i++) {
        while (num >= roman_table[i].value) { // 當當前數字大於等於表中的值時
            strcat(roman, roman_table[i].symbol); // 附加對應的羅馬數字
            num -= roman_table[i].value; // 減去對應的數值
        }
    }
}

int main() {
    char first[MAX_LEN], second[MAX_LEN]; // 定義兩個字串來存儲輸入的羅馬數字
    char result[MAX_LEN]; // 用來存儲輸出的羅馬數字

    // 讀取輸入，直到遇到 `#` 終止
    while (scanf("%s", first) == 1 && strcmp(first, "#") != 0) {
        scanf("%s", second);  // 讀取第二個羅馬數字

        // 轉換羅馬數字為阿拉伯數字
        int num1 = roman_to_int(first);
        int num2 = roman_to_int(second);
        int diff = num1 - num2;  // 計算兩者的差值

        // 若結果為 0，輸出 "ZERO"
        if (diff == 0) {
            printf("ZERO\n");
        } else {
            // 轉換回羅馬數字並輸出
            int_to_roman(diff > 0 ? diff : -diff, result);
            printf("%s\n", result);
        }
    }

    return 0; // 程式結束
}
