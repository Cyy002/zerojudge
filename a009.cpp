#include <stdio.h>
#include <string.h>

int main() {
    char encrypted[1000];  // 假設最大長度不超過 1000
    int k = 7;  // 由範例推出 K=7

    fgets(encrypted, sizeof(encrypted), stdin); // 讀取整行輸入   讀到enter就會停止

    int len = strlen(encrypted);

    // 解密過程：每個字元減去 k
    for (int i = 0; i < len; i++) {
        encrypted[i] -= k;
    }

    printf("%s", encrypted); // 輸出解密後的結果

    return 0;
}
