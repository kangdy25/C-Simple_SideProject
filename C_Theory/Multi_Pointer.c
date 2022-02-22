#include <stdio.h>

int main() {

	int a;
	int * pa;
	int ** ppa;

	a = 3;
	printf("a = %d\n", a);
	printf("&a = %u\n", &a);

	pa = &a;
	printf("pa = %u\n", pa);
	
	*pa = 5;
	printf("*pa = %d\n", *pa);
	printf("&pa = %u\n", &pa);

	ppa = &pa;
	printf("*ppa = %u\n", *ppa);
	// *ppa => pa => &a => 결론 a의 주소값
	printf("**ppa = %u\n", **ppa);
	// **ppa => * (*ppa) => * pa => 5
	printf("&ppa = %u\n", &ppa);
	// &ppa => & (&pa) => & (pa의 주소) => & (&a의 주소) => 결론 뭐 이상한값

	return 1;
}
