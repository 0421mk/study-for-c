#include <stdio.h>

typedef struct information {
	char name[40];
	char title[40];
	int page;
} Info;

// 구조체 포인터 배열
// 동적할당으로 배열을 만들어도 [i]로 접근 가능

int main() {
	Info *info;
	info = (Info*)malloc(sizeof(Info)*3);
	
	printf("도서 정보 입력\n");
	for (int i = 0; i < 3; i++) {
		printf("저자: ");
		fgets(info[i].name, sizeof(info[i].name), stdin);
		info[i].name[strlen(info[i].name) - 1] = 0;

		printf("제목: ");
		fgets(info[i].title, sizeof(info[i].title), stdin);
		info[i].title[strlen(info[i].title) - 1] = 0;

		printf("페이지 수: ");
		scanf_s("%d", &info[i].page, sizeof(info[i].page));

		// getchar()가 \n이면 반복문 break; 즉 getchar()을 읽고 break 시킴
		while (getchar() != '\n');
	}
	
	printf("도서 정보 출력\n");
	
	for (int i = 0; i < 3; i++) {
		printf("book %d\n", i + 1);
		printf("저자 : %s\n", info[i].name);
		printf("제목 : %s\n", info[i].title);
		printf("페이지 수 : %d\n", info[i].page);
	}

	free(info);

	return 0;
}