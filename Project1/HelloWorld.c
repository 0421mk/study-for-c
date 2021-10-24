#include <stdio.h>

// 문자열을 입력받아 단어를 기준으로 역출력
int main() {
	char* ptr = (char*)malloc(sizeof(char) * 30);
	gets_s(ptr, 30);

	ptr[strlen(ptr)] = 0;

	for (int i = strlen(ptr); i >= 0; i--) {
		if (ptr[i] == ' ') {
			// 공백 다음 문자부터 마지막 문자열이 0일때까지 출력
			printf("%s ", &ptr[i+1]);
			// 공백을 문자열의 끝으로 만들기
			// 출력은 문자열의 끝까지 한다
			ptr[i] = 0;
		}
	}

	printf("%s", &ptr[0]);
	
	return 0;
}