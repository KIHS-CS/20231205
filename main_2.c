#include <stdio.h>

int main() {
  // �ŧi�ܼ�
  int number, ones, tens, hundreds, thousands, tenthousands;

  // ��J�����
  printf("�п�J�@�Ӥ���ơG");
  scanf("%d", &number);

  // ���X�U���
  ones = number % 10;
  tens = (number / 10) % 10;
  hundreds = (number / 100) % 10;
  thousands = (number / 1000) % 10;
  tenthousands = (number / 10000) % 10;

  // �P�_�O�_���^��
  if (ones == tenthousands && tens == thousands) {
    printf("%d �O�^��C\n", number);
  } else {
    printf("%d ���O�^��C\n", number);
  }

  return 0;
}
