#include <stdio.h>
int main() {
	int a, b;
	scanf("%d", &a);
	reget:
	scanf("%d", &b);
	if (a-- != 0) {
		printf("%d\n", b);
		goto reget;
	}
}