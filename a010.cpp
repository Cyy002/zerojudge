#include <stdio.h>

void factorize(int n) {
    int count;  // 記錄次方數
    int first = 1; // 用來判斷是否為第一個輸出數

    // 處理 2 這個質因數
    count = 0;
    while (n % 2 == 0) {
        n /= 2;
        count++;
    }
    if (count > 0) {
        printf("2");
        if (count > 1) printf("^%d", count);
        first = 0;
    }

    // 處理奇數因數（從 3 開始，每次增加 2）
    for (int i = 3; i * i <= n; i += 2) {
        count = 0;
        while (n % i == 0) {
            n /= i;
            count++;
        }
        if (count > 0) {
            if (!first) printf(" * ");
            printf("%d", i);
            if (count > 1) printf("^%d", count);
            first = 0;
        }
    }

    // 若 n 還有剩餘的質數
    if (n > 1) {
        if (!first) printf(" * ");
        printf("%d", n);
    }

    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    factorize(n);
    return 0;
}
