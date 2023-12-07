#include <stdio.h>

int main() {
  // 宣告變數
  int number;

  // 輸入數字
  printf("請輸入一個數字：");
  scanf("%d", &number);

  // 判斷是否為質數
  int isPrime = 1;
  for (int i = 2; i * i <= number; i++) {
    if (number % i == 0) {
      isPrime = 0;
      break;
    }
  }

  // 輸出結果
  if (isPrime == 1) {
    printf("%d 是質數。\n", number);
  } else {
    printf("%d 不是質數。\n", number);
  }

  return 0;
}
