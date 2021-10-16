#include <stdio.h>

// 모든 경우의 수를 다 확인합니다.
int main() {
	int cream;
	int shrimp;
	int cola;

	int price = 3500;

	for (cream = 500; cream < price; cream += 500) {
		printf("크림빵 : %d\n", cream);
		for (shrimp = 700; shrimp < price; shrimp += 700) {
			printf("새우 : %d\n", shrimp);
			for (cola = 400; cola < price; cola += 400) {
				printf("콜라 : %d\n", cola);
				if (cream + shrimp + cola == price) {
					printf("크림빵 %d, 새우깡 %d, 콜라 %d개", cream / 500, shrimp / 700, cola / 400);
				}
				else {
					printf("금액이 맞지 않습니다.");
					continue;
				}
			}
		}
	}

	return 0;
}