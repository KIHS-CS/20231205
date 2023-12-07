#include <stdio.h>

int main() {
  // 跑计
  int number, ones, tens, hundreds, thousands, tenthousands;

  // 块き计
  printf("叫块き计");
  scanf("%d", &number);

  // 计
  ones = number % 10;
  tens = (number / 10) % 10;
  hundreds = (number / 100) % 10;
  thousands = (number / 1000) % 10;
  tenthousands = (number / 10000) % 10;

  // 耞琌ゅ
  if (ones == tenthousands && tens == thousands) {
    printf("%d 琌ゅ\n", number);
  } else {
    printf("%d ぃ琌ゅ\n", number);
  }

  return 0;
}
