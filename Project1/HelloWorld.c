#include <stdio.h>

int main()
{
	// 문제 1 : Hello World 출력
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

	// 문제 2 : 3의 배수 출력
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

	//문제3 : 입력된 정수의 합
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

	//문제 4 : 구구단 역순
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

	//문제5 : 정수의 평균
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