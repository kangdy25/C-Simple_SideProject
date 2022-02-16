#include <stdio.h>

int main(void) {
    int op = 0;

    scanf("%d", &op);
    switch(op) {
        case 1:
            a = 1;
            break;
        case 2:
            a = 2;
            break;
        case 3:
            a = 3;
            break;
        default:
            a = 99;
            break;
    }
    printf("결과 : %d\n", a);

    return 0;
}