#include <stdio.h>

int main() {
  // �ŧi�ܼ�
  int number;

  // ��J�Ʀr
  printf("�п�J�@�ӼƦr�G");
  scanf("%d", &number);

  // �P�_�O�_�����
  int isPrime = 1;
  for (int i = 2; i * i <= number; i++) {
    if (number % i == 0) {
      isPrime = 0;
      break;
    }
  }

  // ��X���G
  if (isPrime == 1) {
    printf("%d �O��ơC\n", number);
  } else {
    printf("%d ���O��ơC\n", number);
  }

  return 0;
}
