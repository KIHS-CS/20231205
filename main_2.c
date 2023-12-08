#include <stdio.h>

int main() {
  // 宣告變數
  int number, number_2, ones, tens, hundreds, thousands, tenthousands;

  // 輸入五位數
  printf("請輸入一個五位數：");
  scanf("%d", &number);

  // 取出各位數
  ones = number % 10;
  tens = (number / 10) % 10;
  hundreds = (number / 100) % 10;
  thousands = (number / 1000) % 10;
  tenthousands = (number / 10000) % 10;
  number_2 = ones * 10000 + tens * 1000 + hundreds * 100 + thousands * 10 + tenthousands;

  // 判斷是否為回文
  if (ones == tenthousands && tens == thousands) {
    printf("%d 是回文。\n", number);
  } else {
    printf("%d 不是回文。\n", number);
  }

  return 0;
}
