#include <stdio.h>

int main(void) {

	// 산술연산자: + - * / %
	// 대입연산자: =
	int a = 3;
	int b = 7;
	int c;
	int d = 0;

	c = a + b;
	printf("%d\n", c);
	

	// 논리연산자: || && > < >= <= ==
	
	// 맞으면 1 아니면 0
	// c언어에서 맞다는 0이 아니면 전부 맞는 것!! c언어에서 틀리다는 0이다.
	// 논리 연산 결과가 맞으면 1로 값을 표시!! 틀리면 0으로 값을 표시!!
	int p;
	int q;
	int r;
	
	p = q || r;
	q = r && p;
	r = p == q;
		
	// 비트연산자: | & << >> ~
	// 임베디드 분야를 꿈꾼다면 비트연산은 필수!!
	// & (1 & 1 = 1 그 외는 전부 0)
	// | (0 | 0 = 0 그 외는 전부 1)
	// << (bit를 왼쪽으로 미는 연산)
	// >> (bit를 오른쪽으로 미는 연산)
	// ~ (bit를 반대로 바꾸는 연산, 0은 1이 됨)
	
	char x = 8;
	char y = 4;
	char z = 0;
	// 0000 1000	
	// 0000 0100	
	printf("%d\n", x | y);
	printf("%d\n", x & y);

	// z = x | y;
	// 0000 1100
	// z = x & y;
	// 0000 0000
	
	
	// 삼항연산자: ? (if문 대신 사용가능)
	(1) ? printf("print 1\n") : printf("not\n");
	(0) ? printf("print 1\n") : printf("not\n");
	
	
	// 크기 연산자
	// sizeof()
	int haha;
	int hehe;
	char gggg;
	double kkkk;
	printf("%ld\n", sizeof(haha));
	printf("%ld\n", sizeof(hehe));
	printf("%ld\n", sizeof(gggg));
	printf("%ld\n", sizeof(kkkk));

	return 0;
}
