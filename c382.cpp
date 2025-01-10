#include <stdio.h>
int main(){

  int a = 0, b = '+', c = 0;
  scanf("%d %c %d", &a, &b, &c);
  switch (b){
    case '+':
      printf("%d\n", a + c);
      break;
      case '-':
        printf("%d\n", a - c);
        break;
      case '*':
        printf("%d\n", a * c);
        break;
        case '/':
          printf("%d\n", a / c);
          break;
  }


  return 0;
}