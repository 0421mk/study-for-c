#include <stdio.h>

// �迭���� Ȧ���� ��, ¦���� �Ųٷ� �ڷ� ���
int main() {
	int input;
	int arr1[10];
	int arr2[10];
	int result[10];
	int j = 0;
	int k = 0;
	int arrLen = 0;
	int r = 0;

	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &input);

		if (input % 2 == 1) {
			arr1[j] = input;
			j++;
		}
		else {
			arr2[k] = input;
			k++;
		}
	}

	while (arrLen < j) {
		result[r] = arr1[arrLen];
		arrLen++;
		r++;
	}

	printf("\n");
	arrLen = k - 1;

	while (arrLen >= 0) {
		result[r] = arr2[arrLen];
		r++;
		arrLen--;
	}

	printf("�迭 ����� ��� : ");

	for (int i = 0; i < r; i++) {
		printf("%d ", result[i]);
	}

	return 0;
}
