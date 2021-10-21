#include <stdio.h>

// 구조체 변수 활용 문제2
struct employee {
	char name[10];
	char personNumber[20];
	int payment;
};

int main() {

	struct employee em[3];

	for(int i = 0; i < 3; i++) {
		printf("이름 : ");
		scanf_s("%s", em[i].name, sizeof(em[i].name));
		printf("주민등록번호 : ");
		scanf_s("%s", em[i].personNumber, sizeof(em[i].personNumber));
		printf("급여 : ");
		scanf_s("%d", &(em[i].payment));
	}

	for (int i = 0; i < 3; i++) {
		printf("이름 : %s\n", em[i].name);
		printf("주민등록번호 : %s\n", em[i].personNumber);
		printf("급여 : %d\n", em[i].payment);
	}

	return 0;
}