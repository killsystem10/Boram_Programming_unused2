
#include <stdio.h>
int main() {
	int a;
	printf("=====거짓말 판별기======");
	printf("박지훈은 씹덕인가? 1.맞다 2.아니다\n");
	scanf("%d", &a);
	if (a == 1) {
		printf("진실이다");
	}
	else {
		printf("너는 박지훈이 씹덕이란 것을 부정하고 있다. 거짓이다");
	}
}