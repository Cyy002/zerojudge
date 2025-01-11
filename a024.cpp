#include <stdio.h>

// 計算最大公因數（確保 a >= b）
int gcd(int a, int b) {
    if (a < b) {  // 交換 a 和 b，確保 a >= b
        int temp = a;
        a = b;
        b = temp;
    }

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", gcd(a, b));
    return 0;
}
