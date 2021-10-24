#include <stdio.h>

// 정수를 입력받아 배열 출력, 사이즈는 realloc으로 수정 가능
int main() {
	int* ptr = (int*) malloc(sizeof(int) * 5);
	int size = 0;

	while (1) {
		scanf_s("%d", &ptr[size], sizeof(ptr));

		if (ptr[size] == -1) {
			printf("프로그램을 종료합니다.\n");
			break;
		}

		size++;

		if (_msize(ptr) <= sizeof(int) * size) {
			(int*)realloc(ptr, _msize(ptr) + sizeof(int)*3);
			printf("_msize(ptr) : %d\n", _msize(ptr));
		}
	}

	for (int i = 0; i < size; i++) {
		printf("%d ", ptr[i]);
	}

	free(ptr);
	
	return 0;
}