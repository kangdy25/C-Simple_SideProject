#include <stdio.h>

int main(void) {
    int a = 0;

    printf("정수를 입력: __\b\b"); 
    scanf("%d", &a);
    printf("입력 값: %d\n", a);

    return 0;
}