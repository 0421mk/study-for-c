#include <stdio.h>

int main() {
	
	int num1 = 10;
	int num2 = 20;

	// �ּҰ��� �����ϰ� num1, num2�� �޸� �ּҰ��� ����Ŵ
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* temp;

	// ���� �ּҷ� ã�ư� ���� ����
	(*ptr1) += 10; // num1 = 20
	(*ptr2) -= 10; // num2 = 10

	// �ּҰ��� ���� ������
	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
	
	// ���� �ּҷ� ã�ư� ���� ����
	printf("%d, %d\n", *ptr1, *ptr2);

	return 0;
}