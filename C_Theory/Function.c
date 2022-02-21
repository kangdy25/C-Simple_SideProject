#include <stdio.h>

int sum(int a, int b) {
	int c = 0;
	c = a + b;
	return c;
}

int main(void) {

	printf("start\n");

	int result = sum(1, 2);
	
	printf("결과 : %d\n", result);

	return 0;
}
