#include <stdio.h>

// ���� ū�� ã�� �Լ�
/*
int main()
{
	int input1, input2, input3;

	scanf_s("%d", &input1);
	scanf_s("%d", &input2);
	scanf_s("%d", &input3);

	int result;
	result = returnMax(input1, input2, input3);

	printf("%d", result);

	return 0;
 }

int returnMax(int a, int b, int c) {
	int d;
	if (a >= b) {
		d = a;
	}
	else {
		d = b;
	}

	if (d >= c) {
		return d;
	}
	else {
		return c;
	}
}
*/

// main �Լ����� CelToFah �Լ��� ����Ϸ��� ��ó�� ���� ���� ������ ����� �մϴ�.
// ���� ȭ�� ����
/*
double CelToFah(double cel);

int main()
{
	double input = 0;

	scanf_s("%lf", &input);

	double result;
	
	result = CelToFah(input);

	printf("%lf", result);

	return 0;
}

double CelToFah(double cel) {
	double result = 1.8 * 8 + (double)32;
	return result;
}
*/

//�Ǻ���ġ ���� ��� ����
int main() {
	int number1 = 0;
	int number2 = 1;
	int result;
	int input;

	scanf_s("%d", &input);

	printf("%d", number1);
	printf("%d", number2);

	for (int i = 0; i < input - 2; i++) {
		result = number1 + number2;
		number1 = number2;
		number2 = result;

		printf("%d", result);
	}

	return 0;
}