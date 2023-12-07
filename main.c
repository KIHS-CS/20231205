#include <stdio.h>

int main() {
  // 跑计
  int number, ones, tens, hundreds, thousands;

  // 块计
  printf("叫块计");
  scanf("%d", &number);

  // 计
  ones = number % 10;
  tens = (number / 10) % 10;
  hundreds = (number / 100) % 10;
  thousands = (number / 1000) % 10;

  // 耞计琌 3 计
  if (ones % 3 == 0) {
    printf("计 %d 琌 3 计\n", ones);
  } else {
    printf("计 %d ぃ琌 3 计\n", ones);
  }

  if (tens % 3 == 0) {
    printf("计 %d 琌 3 计\n", tens);
  } else {
    printf("计 %d ぃ琌 3 计\n", tens);
  }

  if (hundreds % 3 == 0) {
    printf("κ计 %d 琌 3 计\n", hundreds);
  } else {
    printf("κ计 %d ぃ琌 3 计\n", hundreds);
  }

  if (thousands % 3 == 0) {
    printf("计 %d 琌 3 计\n", thousands);
  } else {
    printf("计 %d ぃ琌 3 计\n", thousands);
  }

  return 0;
}
