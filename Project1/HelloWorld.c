#include <stdio.h>
#include <stdlib.h>

// 구조체를 이용하여 직사각형의 넓이와 좌표 출력
typedef struct point
{
	int xpos;
	int ypos;
} Point;

int room(Point pos1, Point pos2) {
	int height;
	int width;

	width = abs(pos1.xpos - pos2.xpos);
	height = abs(pos1.ypos - pos2.ypos);

	return width * height;
}

int main() {
	Point pos1 = { 0,0 };
	Point pos2 = { 100,100 };

	int roomVal = room(pos1, pos2);

	printf("%d\n", roomVal);
	printf("%d %d\n", pos1.xpos, pos1.ypos);
	printf("%d %d\n", pos1.xpos, pos2.ypos);
	printf("%d %d\n", pos2.xpos, pos1.ypos);
	printf("%d %d\n", pos2.xpos, pos2.ypos);

	return 0;
}