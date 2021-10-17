#include <stdio.h>

int main() {
	
	int num1 = 10;
	int num2 = 20;

	// 주소값을 선언하고 num1, num2의 메모리 주소값을 가르킴
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* temp;

	// 직접 주소로 찾아가 값을 참조
	(*ptr1) += 10; // num1 = 20
	(*ptr2) -= 10; // num2 = 10

	// 주소값을 서로 변경함
	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
	
	// 직접 주소로 찾아가 값을 참조
	printf("%d, %d\n", *ptr1, *ptr2);

	return 0;
}