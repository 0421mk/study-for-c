#include <stdio.h>

int main()
{
	// ���� 1 : Hello World ���
	/*
	int input = 0;
	int i = 0;
	scanf_s("%d", &input);

	while (i < input) {
		printf("Hello World!\n");
		i++;
	}

	return 0;
	*/

	// ���� 2 : 3�� ��� ���
	/*
	int input = 0;
	int i = 1;
	scanf_s("%d", &input);

	while (i <= input) {
		printf("%d\n", i*3);
		i++;
	}

	return 0;
	*/

	//����3 : �Էµ� ������ ��
	/*
	int input = 1;
	int total = 0;
	

	while (input != 0) {
		scanf_s("%d", &input);
		total += input;
	}

	printf("%d", total);

	return 0;
	*/

	//���� 4 : ������ ����
	/*
	int input = 0;
	int i = 9;

	scanf_s("%d", &input);
	while (i != 0) {
		
		printf("%d * %d = %d\n", input, i, input * i);
		
		i--;
	}

	return 0;
	*/

	//����5 : ������ ���
	int input = 0;
	int argInput = 0;
	int i = 0;
	int total = 0;

	scanf_s("%d", &input);
	while (i < input) {
		scanf_s("%d", &argInput);

		total += argInput;

		i++;
	}

	double result = total / input;
	printf("%f", result);

	return 0;
}