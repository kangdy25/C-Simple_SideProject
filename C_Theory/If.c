#include <stdio.h>

int main(void) {
    int a = 0;
    int b = 2;

    if (0) {
        a = 3;
    } 
    else if (1) {
        a = 5;
    }
    else {
        a = 4;
    }
    printf("결과 : %d\n", a);

    return 0;
}