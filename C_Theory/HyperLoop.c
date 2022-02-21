#include <stdio.h>

int main(void) {

	for(int i = 1; i < 10; i++) {
		printf("[%d단]\n", i);
		for (int j = 1; j < 10; j++) {

		//	if(j % 2 == 0) {
		//		continue;
		//	}

			if (j > 5) {
				break;
			}	
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}

	
	return 0;
}
