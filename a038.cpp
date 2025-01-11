#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char str[1000000];
  scanf("%s", str);

  int len = strlen(str);

  // 反轉字串
  for (int i = 0; i < len / 2; i++) {
    char temp = str[i];
    str[i] = str[len - i - 1];
    str[len - i - 1] = temp;
  }

  // 轉換為整數，去除前導零
  int result = atoi(str);//atoi() 是 C 語言標準函式，來自 <stdlib.h>，用來將字串轉換為整數（int）。作用：忽略前導零，並轉換數字部分
  printf("%d\n", result);

  return 0;
}
