#include <stdio.h>
#include <string.h>

int main() {
  char names[1000];  // 存放第一行的名字
  char greeting[100];  // 存放第二行的問候語

  // 讀取第一行的名字
  fgets(names, sizeof(names), stdin);
  // 讀取第二行的問候語
  fgets(greeting, sizeof(greeting), stdin);

  // 移除問候語中的換行符（避免輸出格式錯誤）
  greeting[strcspn(greeting, "\n")] = '\0';

  // 使用 strtok() 拆分名字
  char *token = strtok(names, " \n");
  while (token != NULL) {
    printf("%s, %s\n", greeting, token);
    token = strtok(NULL, " \n");
  }

  return 0;
}
