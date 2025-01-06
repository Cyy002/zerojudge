#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);

  for (int i = 0; i < t; i++) {
    int a1, a2, a3, a4, a5;
    scanf("%d %d %d %d", &a1, &a2, &a3, &a4);

    // 判斷是否為等差數列
    if ((a2 - a1) == (a3 - a2) && (a3 - a2) == (a4 - a3)) {
      int d = a2 - a1;  // 公差
      a5 = a4 + d;  // 計算第五項
    }
    // 判斷是否為等比數列
    else if ((a2 / a1) == (a3 / a2) && (a3 / a2) == (a4 / a3)) {
      int r = a2 / a1;  // 公比
      a5 = a4 * r;  // 計算第五項
    }

    // 印出完整的五個數字
    printf("%d %d %d %d %d\n", a1, a2, a3, a4, a5);
  }

  return 0;
}
