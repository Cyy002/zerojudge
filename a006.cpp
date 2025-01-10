#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int delta = b * b - 4 * a * c;  // 計算判別式 Δ

    if (delta > 0) {  // 兩個不同的實根
        int x1 = (-b + sqrt(delta)) / (2 * a);
        int x2 = (-b - sqrt(delta)) / (2 * a);
        if (x1 < x2) {  // 保證較大的數在前
            int temp = x1;
            x1 = x2;
            x2 = temp;
        }
        printf("Two different roots x1=%d , x2=%d\n", x1, x2);
    } else if (delta == 0) {  // 兩個相同的實根
        int x = -b / (2 * a);
        printf("Two same roots x=%d\n", x);
    } else {  // 無實根
        printf("No real root\n");
    }

    return 0;
}
