#include <stdio.h>
#define ADD(x, y, z) ((x)+(y)+(z))
#define MUL(x, y, z) ((x)*(y)*(z))
#define PI 3.141592
#define AREA(r) ((r)*(r)*PI)
#define MAX(x, y) ((x) > (y) ? (x) : (y))

// ����ó���� ���� ����
int main() {
	printf("3+4+5 = %d\n", ADD(3, 4, 5));
	printf("3*4*5 = %d\n", MUL(3, 4, 5));
	printf("������ 4�� ���� ���� = %f\n", AREA(4));
	printf("3, 4 �� �� ū ���� : %d\n", MAX(3, 4));

	return 0;
}