#include <stdio.h>

// 이중 포인터를 이용해 최댓값, 최솟값 구하는 함수 구현
void MaxAndMin(int* arr, int size, int** maxPtr, int** minPtr) {
	int* max;
	int* min;

	max = min = &arr[0];

	for (int i = 0; i < size; i++) {
		if (*max < arr[i]) {
			max = &arr[i];
		}

		if (*min > arr[i]) {
			min = &arr[i];
		}
	}

	//*maxPtr 은 주소 자체 값
	//*(*maxPtr)은 주소에 담겨있는 실제 값
	*maxPtr = max;
	*minPtr = min;
}

int main(void) {
	int* maxPtr;
	int* minPtr;
	int arr[5];

	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i]);
	}

	MaxAndMin(arr, 5, &maxPtr, &minPtr);
	printf("최대 : %d, 최소 : %d \n", *maxPtr, *minPtr);

	return 0;
}