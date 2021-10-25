#include <stdio.h>

typedef struct information {
	char name[40];
	char title[40];
	int page;
} Info;

// 구조체 배열로 정보 입력받고 출력하기
// 개행문자 입력받는것이 포인트

int main() {
	Info arr[3];
	int number;
	
	printf("도서 정보 입력\n");
	for (int i = 0; i < 3; i++) {
		printf("저자: ");
		fgets(arr[i].name, sizeof(arr[i].name), stdin);
		arr[i].name[strlen(arr[i].name) - 1] = 0;

		printf("제목: ");
		fgets(arr[i].title, sizeof(arr[i].title), stdin);
		arr[i].title[strlen(arr[i].title) - 1] = 0;

		printf("페이지 수: ");
		scanf_s("%d", &arr[i].page, sizeof(arr[i].page));

		// getchar()가 \n이면 반복문 break; 즉 getchar()을 읽고 break 시킴
		while (getchar() != '\n');
	}
	
	printf("도서 정보 출력\n");
	
	for (int i = 0; i < 3; i++) {
		printf("book %d\n", i + 1);
		printf("저자 : %s\n", arr[i].name);
		printf("제목 : %s\n", arr[i].title);
		printf("페이지 수 : %d\n", arr[i].page);
	}

	return 0;
}