#include <stdio.h>

int main()
{
	//����1 : �� ���� �Է¹޾Ƽ� ù ������ �ι�° �������� ��
	/*
	int input1 = 0;
	int input2 = 0;
	int total = 0;

	scanf_s("%d", &input1);
	scanf_s("%d", &input2);

	while (input1 <= input2) {
		total += input1;
		input1++;
	}

	printf("%d", total);

	return 0;
	*/
	
	// ���丮�� ����
	int input = 0;
	int result = 1;
	int i = 1;

	scanf_s("%d", &input);

	while (i <= input) {
		result *= i;
		i++;
	}

	printf("%d", result);

	return 0;
}