#include <stdio.h>

// 구조체 변수의 연산 swapPoint 함수 구현
typedef struct point
{
	int xpos;
	int ypos;
} Point;

void swapPoint(Point* pos1, Point* pos2) {
	int temp = pos1 -> xpos;
	pos1 -> xpos = pos2 -> xpos;
	pos2 -> xpos = temp;

	temp = pos1 -> ypos;
	pos1 -> ypos = pos2 -> ypos;
	pos2 -> ypos = temp;
}

int main() {
	Point pos1 = { 2,4 };
	Point pos2 = { 5,7 };

	swapPoint(&pos1, &pos2);

	printf("%d %d\n", pos1.xpos, pos1.ypos);
	printf("%d %d\n", pos2.xpos, pos2.ypos);

	return 0;
}