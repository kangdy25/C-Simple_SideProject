#include <stdio.h>



void test() {
	printf("func test\n");
}

void test2() {
	printf("func test2\n");
}

int main() {


	void (*fp)();

	fp = test;
	fp();
	
	fp = test2;
	fp();
	
	printf("%d\n", sizeof(fp));
	return 1;

}
