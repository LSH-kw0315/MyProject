#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	printf("���� ���� �ܼ� �Է�:");
	int left = scanf("%d", &left);
	int i = 0;
	while (i < 9) {
		printf("%d X %d = %d", left, i + 1, left * (i + 1));
		i++;
	}
}