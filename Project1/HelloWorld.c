#include <stdio.h>

// 포인터로 직접 변수 접근 하는 함수 구현
/*
int main() {
	int num = 3;

	int result1 = SquareByValue(num);
	int result2 = SquareByReference(&num);
	
	printf("result1 : %d, result2 = %d\n", result1, result2);
	printf("num : %d", num);

	return 0;
}

int SquareByValue(int num) {
	return num * num;
}

int SquareByReference(int* num) {
	*num = (*num) * (*num);
	return *num;
}
*/

// 세 변수에 저장된 값을 바꾸는 함수 구현
void Swap3(int* num1, int* num2, int* num3);

int main() {
	int num1 = 3;
	int num2 = 6;
	int num3 = 9;

	Swap3(&num1, &num2, &num3);

	printf("num1 : %d, num2 : %d, num3 : %d", num1, num2, num3);

	return 0;
}

void Swap3(int* num1, int* num2, int* num3) {
	int temp = *num2;
	int temp2 = *num3;

	*num2 = *num1;
	*num3 = temp;
	*num1 = temp2;
}