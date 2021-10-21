#include <stdio.h>
#include <string.h>

// 공백의 위치 return
int getIndexByStr(char* str) {
	int index = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == ' ') {
			index = i;
		}
	}

	return index;
}

// 이름 비교
int compareName(char* str1, char* str2, int index) {
	int result = 0;
	if (!strncmp(str1, str2, index)) {
		result = 1;
	}

	return result;
}

// 나이 비교
int compareAge(char* str1, char* str2) {
	int result = 0;
	int index1 = getIndexByStr(str1);
	int index2 = getIndexByStr(str2);

	int age1 = atoi(&str1[index1 + 1]);
	int age2 = atoi(&str2[index2 + 1]);

	if (age1 == age2) {
		result = 1;
	}

	return result;
}
// 사용자의 이름과 나이를 입력받아 비교 작업
int main() {
	char str1[20];
	char str2[20];

	fputs("첫번째 사용자를 입력해주세요.", stdout);
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;
	int index1 = getIndexByStr(str1);

	fputs("두번째 사용자를 입력해주세요.", stdout);
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;
	int index2 = getIndexByStr(str2);

	if (compareName(str1, str2, index1)) {
		printf("이름이 같습니다.\n");
	}
	else {
		printf("이름이 같지 않습니다.\n");
	}

	if (compareAge(str1, str2)) {
		printf("나이가 동일합니다.\n");
	}
	else {
		printf("나이가 동일하지 않습니다.\n");
	}

	return 0;
}