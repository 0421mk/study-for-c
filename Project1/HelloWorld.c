#include <stdio.h>
#include <stdlib.h>

// 2���� ������ �迭�� ������ �迭 ���
int main() {

	// �� �Է¹ޱ�
	int size;
	scanf_s("%d", &size);
	int addVal = 0;
	//

	// ���� �����Ϳ� (int �ڷ����� ũ�� * row) ��ŭ ���� �޸� �Ҵ�(�迭�� ����)
	int** arr = malloc(sizeof(int) * size);

	// �迭 ���� ù �ּҰ��� int �ڷ����� ũ�� * size��ŭ ���� �޸� �Ҵ�(�迭�� ����)
	for (int i = 0; i < size; i++) {
		*(arr + i) = malloc(sizeof(int) * size);
	}

	int tempSize = size;
	int roop;

	if (size % 2 == 0) {
		roop = 2;
	}
	else {
		roop = 3;
	}

	int j = 0;

	while (tempSize >= roop) {
		// ���� �����Ϳ� (int �ڷ����� ũ�� * row) ��ŭ ���� �޸� �Ҵ�(�迭�� ����)
		int** temp = malloc(sizeof(int) * tempSize);

		// �迭 ���� ù �ּҰ��� int �ڷ����� ũ�� * size��ŭ ���� �޸� �Ҵ�(�迭�� ����)
		for (int i = 0; i < tempSize; i++) {
			*(temp + i) = malloc(sizeof(int) * tempSize);
		}

		for (int i = 0; i < tempSize; i++) {
			// �߿�!!!! 2���� �迭 ������ �� �����ϱ�!!!!
			*(*(temp + 0) + i) = (i + 1) + addVal;
			*(*(arr + 0 + j) + i + j) = *(*(temp + 0) + i);
		}

		temp[1][1] = (size * 4 - 4) + 1 + addVal;
		arr[1 + j][1 + j] = temp[1][1];
		int outer = *(*(temp + 1) + 1) + **temp;

		for (int i = 1; i < tempSize; i++) {
			*(*(temp + i) + 0) = outer - *(*(temp + 0) + i);
			*(*(arr + i + j) + 0 + j) = *(*(temp + i) + 0);
		}

		for (int i = 1; i < tempSize; i++) {
			//result[i][4] = result[0][4] + i;
			*(*(temp + i) + (tempSize - 1)) = *(*(temp + 0) + (tempSize - 1)) + i;
			*(*(arr + i + j) + (tempSize - 1 + j)) = *(*(temp + i) + (tempSize - 1));
		}

		for (int i = 1; i < tempSize; i++) {
			//result[4][i] = outer - result[i][4];
			*(*(temp + (tempSize - 1)) + i) = outer - *(*(temp + i) + (tempSize - 1));
			*(*(arr + (tempSize - 1) + j) + i + j) = *(*(temp + (tempSize - 1)) + i);
		}
		//

		tempSize -= 2;
		addVal = temp[1][1];
		j++;

		// 2���� �迭 ���� ���� �޸� ����
		for (int i = 0; i < tempSize; i++) {
			free(temp[i]);
		}

		// ���� ���� �޸� ����
		free(temp);
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	// 2���� �迭 ���� ���� �޸� ����
	for (int i = 0; i < size; i++) {
		free(arr[i]);
	}

	// ���� ���� �޸� ����
	free(arr);
	
	return 0;
}