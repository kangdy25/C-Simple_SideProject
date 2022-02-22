#include <stdio.h>

int main() {
	
	int a;

	int *pa;

	a = 3;
	
	printf("a = %d\n", a);
	// 예측하기 히히히 -> 3
	
	printf("&a = %d\n", &a);	
	// 예측하기 히히히 -> 알 수 없는 이상한 주소값 32423523

	pa = &a;
	printf("pa = %d\n", pa);
	// 예측하기 히히히 -> 위의 것과 같은 이상한 주소값 32423523
	
	printf("*pa = %d\n", *pa);
	// 예측하기 히히히 -> 3
	
	printf("&pa = %d\n", &pa);
	// 예측하기 히히히 -> 32423523의 이상한 주소값 23523464
	
	// 위에서 정한 32423523과 23523464는 임의로 정한 값
	return 1;
}
