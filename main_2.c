#include <stdio.h>

int main() {
  // 宣告變數
  int number, ones, tens, hundreds, thousands, tenthousands;

  // 輸入五位數
  printf("請輸入一個五位數：");
  scanf("%d", &number);

  // 取出各位數
  ones = number % 10;
  tens = (number / 10) % 10;
  hundreds = (number / 100) % 10;
  thousands = (number / 1000) % 10;
  tenthousands = (number / 10000) % 10;

  // 判斷是否為回文
  if (ones == tenthousands && tens == thousands) {
    printf("%d 是回文。\n", number);
  } else {
    printf("%d 不是回文。\n", number);
  }

  return 0;
}
