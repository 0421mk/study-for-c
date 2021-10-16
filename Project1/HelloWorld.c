#include <stdio.h>

int main()
{
	//문제1 : 두 수를 입력받아서 첫 수부터 두번째 수까지의 합
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
	
	// 팩토리얼 구현
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