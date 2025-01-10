#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);  // 讀取測資數量

  for (int i = 0; i < N; i++) {
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    if (a == 1) {
      printf("%lld\n", b + c);
    } else if (a == 2) {
      printf("%lld\n", b - c);
    } else if (a == 3) {
      printf("%lld\n", b * c);
    } else if (a == 4) {
      if (c == 0) {
        printf("0\n");  // 除數為 0 時，直接輸出 0
      } else {
        printf("%lld\n", b / c);  // 整數除法
      }
    }
  }

  return 0;
}
