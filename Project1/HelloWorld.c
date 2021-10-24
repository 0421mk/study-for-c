#include <stdio.h>
#define ADD(x, y, z) ((x)+(y)+(z))
#define MUL(x, y, z) ((x)*(y)*(z))
#define PI 3.141592
#define AREA(r) ((r)*(r)*PI)
#define MAX(x, y) ((x) > (y) ? (x) : (y))

// 선행처리기 예제 문제
int main() {
	printf("3+4+5 = %d\n", ADD(3, 4, 5));
	printf("3*4*5 = %d\n", MUL(3, 4, 5));
	printf("반지름 4인 원의 넓이 = %f\n", AREA(4));
	printf("3, 4 중 더 큰 수는 : %d\n", MAX(3, 4));

	return 0;
}