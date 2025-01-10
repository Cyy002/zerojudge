#include <stdio.h>

int main() {
  int row, col; // 用來儲存矩陣的列數(row)與行數(col)

  // 使用 while 迴圈讀取多組測試資料，直到遇到檔案結束 (EOF)
  while (scanf("%d %d", &row, &col) != EOF) {
    int matrix[row][col];     // 宣告原始矩陣
    int transposed[col][row]; // 宣告轉置後的矩陣 (行數與列數互換)

    // 讀取輸入矩陣的內容
    for (int i = 0; i < row; i++) { // 遍歷每一列
      for (int j = 0; j < col; j++) { // 遍歷每一行
        scanf("%d", &matrix[i][j]); // 讀取數值存入矩陣
      }
    }

    // 執行矩陣轉置 (行列互換)
    for (int i = 0; i < row; i++) { // 遍歷原矩陣的列
      for (int j = 0; j < col; j++) { // 遍歷原矩陣的行
        transposed[j][i] = matrix[i][j]; // 轉置：把 (i, j) 位置的值存到 (j, i)
      }
    }

    // 輸出轉置後的矩陣
    for (int i = 0; i < col; i++) { // 遍歷轉置後的矩陣行數 (原矩陣的列數)
      for (int j = 0; j < row; j++) { // 遍歷轉置後的矩陣列數 (原矩陣的行數)
        printf("%d", transposed[i][j]); // 輸出對應的數值
        if (j < row - 1) { // 如果不是該行的最後一個數字
          printf(" "); // 輸出空格來分隔數字
        }
      }
      printf("\n"); // 換行，準備輸出下一行
    }
  }

  return 0; // 結束程式
}
