#include <stdio.h>

int main(void)
{
    // �̸�? ����? ������? Ű? ���˸�?
    char name[256];
    printf("�̸��� ������? ");
    scanf("%s", &name, sizeof(name));

    int age;
    printf("�� ���̿���? ");
    scanf("%d", &age);

    float weight;
    printf("�����԰� �󸶿���? ");
    scanf("%f", &weight);

    double height;
    printf("Ű�� �󸶿���? ");
    scanf("%lf", &height);

    char fault[256];
    printf("���� �߸��� �߾��? ");
    scanf("%s", &fault, sizeof(fault));

    printf("\n\n======================���� ���� ���======================\n\n");
    printf("�̸� :       %s\n", name);
    printf("���� :       %d\n", age);
    printf("������ :     %.2f\n", weight);
    printf("Ű :         %.2lf\n", height);
    printf("�߸� :       %s\n", fault);



    return 0;
}
