#include <stdio.h>

int main() {
  // �ŧi�ܼ�
  int number, ones, tens, hundreds, thousands;

  // ��J�|���
  printf("�п�J�@�ӥ|��ơG");
  scanf("%d", &number);

  // ���X�U���
  ones = number % 10;
  tens = (number / 10) % 10;
  hundreds = (number / 100) % 10;
  thousands = (number / 1000) % 10;

  // �P�_�U��ƬO�_�� 3 ������
  if (ones % 3 == 0) {
    printf("�Ӧ�� %d �O 3 �����ơC\n", ones);
  } else {
    printf("�Ӧ�� %d ���O 3 �����ơC\n", ones);
  }

  if (tens % 3 == 0) {
    printf("�Q��� %d �O 3 �����ơC\n", tens);
  } else {
    printf("�Q��� %d ���O 3 �����ơC\n", tens);
  }

  if (hundreds % 3 == 0) {
    printf("�ʦ�� %d �O 3 �����ơC\n", hundreds);
  } else {
    printf("�ʦ�� %d ���O 3 �����ơC\n", hundreds);
  }

  if (thousands % 3 == 0) {
    printf("�d��� %d �O 3 �����ơC\n", thousands);
  } else {
    printf("�d��� %d ���O 3 �����ơC\n", thousands);
  }

  return 0;
}
