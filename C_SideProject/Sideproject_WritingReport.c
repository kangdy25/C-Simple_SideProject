#include <stdio.h>

int main(void)
{
    // 이름? 나이? 몸무게? 키? 범죄명?
    char name[256];
    printf("이름이 뭐에요? ");
    scanf("%s", &name, sizeof(name));

    int age;
    printf("몇 살이에요? ");
    scanf("%d", &age);

    float weight;
    printf("몸무게가 얼마에요? ");
    scanf("%f", &weight);

    double height;
    printf("키가 얼마에요? ");
    scanf("%lf", &height);

    char fault[256];
    printf("무슨 잘못을 했어요? ");
    scanf("%s", &fault, sizeof(fault));

    printf("\n\n======================조서 쓰기 결과======================\n\n");
    printf("이름 :       %s\n", name);
    printf("나이 :       %d\n", age);
    printf("몸무게 :     %.2f\n", weight);
    printf("키 :         %.2lf\n", height);
    printf("잘못 :       %s\n", fault);



    return 0;
}
