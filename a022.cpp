#include <stdio.h>
#include <string.h>

int main() {
  char list[1000];
  scanf("%s", list);
  int len = strlen(list); // 取得字串長度

  int isPalindrome = 1; // 1 表示是迴文

  for (int i = 0; i < len / 2; i++) {
    if (list[i] != list[len - i - 1]) {
      isPalindrome = 0; // 不是迴文
      break;
    }
  }

  if (isPalindrome) {
    printf("yes\n");
  } else {
    printf("no\n");
  }

  return 0;
}
