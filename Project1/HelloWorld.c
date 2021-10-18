#include <stdio.h>

// ���� �����͸� �̿��� �ִ�, �ּڰ� ���ϴ� �Լ� ����
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

	//*maxPtr �� �ּ� ��ü ��
	//*(*maxPtr)�� �ּҿ� ����ִ� ���� ��
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
	printf("�ִ� : %d, �ּ� : %d \n", *maxPtr, *minPtr);

	return 0;
}