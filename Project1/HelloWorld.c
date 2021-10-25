#include <stdio.h>

typedef struct number {
	double c;
	double i;
} Number;

Number add(double c1, double i1, double c2, double i2);
Number mul(double c1, double i1, double c2, double i2);

int main() {
	Number num1;
	Number num2;
	
	scanf_s("%lf %lf", &num1.c, &num1.i);
	scanf_s("%lf %lf", &num2.c, &num2.i);

	Number result1;
	Number result2;

	result1 = add(num1.c, num1.i, num2.c, num2.i);
	result2 = mul(num1.c, num1.i, num2.c, num2.i);

	printf("합의 결과] 실수: %lf, 허수: %lf\n", result1.c, result1.i);
	printf("곱의 결과] 실수: %lf, 허수: %lf\n", result2.c, result2.i);

	return 0;
}

Number add(double c1, double i1, double c2, double i2) {
	Number result;

	result.c = c1 + c2;
	result.i = i1 + i2;

	return result;
}

Number mul(double c1, double i1, double c2, double i2) {
	Number result;

	result.c = (c1*c2) - (i1*i2);
	result.i = (i1 * c2) + (c2 * i1);

	return result;
}