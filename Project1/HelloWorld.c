#include <stdio.h>

// 구조체 변수 활용 문제
struct employee {
	char name[10];
	char personNumber[20];
	int payment;
};

int main() {

	struct employee em;

	scanf_s("%s", em.name, sizeof(em.name));
	scanf_s("%s", em.personNumber, sizeof(em.personNumber));
	scanf_s("%d", &(em.payment));

	printf("이름 : %s\n", em.name);
	printf("주민등록번호 : %s\n", em.personNumber);
	printf("급여 : %d\n", em.payment);

	return 0;
}