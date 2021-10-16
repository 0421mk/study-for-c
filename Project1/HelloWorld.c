#include <stdio.h>

int main()
{
	int i = 0;
	int input = 0;
	int total = 0;
	while (i < 5) {

		scanf_s("%d", &input);

		if (input < 1) {
			printf("1 이상의 수를 입력해주세요.\n");
			continue;
		}

		total += input;
		i++;
	}

	printf("%d", total);

	return 0;
}