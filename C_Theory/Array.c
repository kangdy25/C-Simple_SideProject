#include <stdio.h>

int main(void) {

	int array[10];

	for (int i = 0; i < 10; i++) {
		array[i] = i;
		printf("array[%d] = %d\n", i, array[i]);
	}

	return 0;
}	
