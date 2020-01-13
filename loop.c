#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	printf("보고 싶은 단수 입력:");
	int left = scanf("%d", &left);
	for (int i = 0;i < 9;i++) {
		printf("%d X %d = %d \n", left, i + 1, left * (i + 1));
	}
}