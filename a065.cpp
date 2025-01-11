#include <stdio.h>
#include <stdlib.h>

int main() {
  char letter1, letter2, letter3, letter4, letter5, letter6, letter7;
  scanf(" %c %c %c %c %c %c %c", &letter1, &letter2, &letter3, &letter4, &letter5, &letter6, &letter7);

  // 正確的英文字母陣列
  char arr[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int num[26] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};

  int suma = 0, sumb = 0, sumc = 0, sumd = 0, sume = 0, sumf = 0, sumg = 0;

  for (int i = 0; i < 26; i++) {
    if (arr[i] == letter1) suma = num[i];
    if (arr[i] == letter2) sumb = num[i];
    if (arr[i] == letter3) sumc = num[i];
    if (arr[i] == letter4) sumd = num[i];
    if (arr[i] == letter5) sume = num[i];
    if (arr[i] == letter6) sumf = num[i];
    if (arr[i] == letter7) sumg = num[i];
  }

  int tol1 = abs(sumb - suma);
  int tol2 = abs(sumc - sumb);
  int tol3 = abs(sumd - sumc);
  int tol4 = abs(sume - sumd);
  int tol5 = abs(sumf - sume);
  int tol6 = abs(sumg - sumf);

  printf("%d%d%d%d%d%d\n", tol1, tol2, tol3, tol4, tol5, tol6);

  return 0;
}
