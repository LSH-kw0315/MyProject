#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	printf("보고 싶은 단수 입력:");
	int left = scanf("%d", &left);
	int i = 0;
	while (i < 9) {
		printf("%d X %d = %d", left, i + 1, left * (i + 1));
		i++;
	}
}