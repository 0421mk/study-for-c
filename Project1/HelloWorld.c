#include <stdio.h>

// ������ ��, �ִ�, �ּڰ� �迭�� ���ϱ�
int main() {
	int arr[5];
	int input;
	int max = 0;
	int min = 0;
	int total = 0;

	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &input);
		arr[i] = input;

		if (max < arr[i]) {
			max = arr[i];
		}

		if (i == 0) {
			min = arr[i];
		}
		else {
			if (min > arr[i]) {
				min = arr[i];
			}
		}
		
		total += arr[i];
	}

	printf("�ִ� : %d, �ּڰ� : %d, ������ �� : %d", max, min, total);

	return 0;
}