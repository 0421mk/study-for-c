#include <stdio.h>
#include <stdlib.h>

// 2차원 포인터 배열로 달팽이 배열 출력
int main() {

	// 값 입력받기
	int size;
	scanf_s("%d", &size);
	int addVal = 0;
	//

	// 이중 포인터에 (int 자료형의 크기 * row) 만큼 동적 메모리 할당(배열의 세로)
	int** arr = malloc(sizeof(int) * size);

	// 배열 세로 첫 주소값에 int 자료형의 크기 * size만큼 동적 메모리 할당(배열의 가로)
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
		// 이중 포인터에 (int 자료형의 크기 * row) 만큼 동적 메모리 할당(배열의 세로)
		int** temp = malloc(sizeof(int) * tempSize);

		// 배열 세로 첫 주소값에 int 자료형의 크기 * size만큼 동적 메모리 할당(배열의 가로)
		for (int i = 0; i < tempSize; i++) {
			*(temp + i) = malloc(sizeof(int) * tempSize);
		}

		for (int i = 0; i < tempSize; i++) {
			// 중요!!!! 2차원 배열 포인터 값 변경하기!!!!
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

		// 2차원 배열 가로 공간 메모리 해제
		for (int i = 0; i < tempSize; i++) {
			free(temp[i]);
		}

		// 세로 공간 메모리 해제
		free(temp);
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	// 2차원 배열 가로 공간 메모리 해제
	for (int i = 0; i < size; i++) {
		free(arr[i]);
	}

	// 세로 공간 메모리 해제
	free(arr);
	
	return 0;
}