#include <stdio.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int i = rand() % 100 + 1;
    int chance = 7;
    int number;
    printf("%d\n", i);
    while(chance > 0)
    {
        printf("���� ��ȸ %d��\n", chance--);
        printf("���ڸ� �����ϼ��� (1 ~ 100):  ");
        scanf("%d", &number);

        if(i < number)
        {
            printf("DOWN ���\n\n");
            
        }
        else if(number < i)
        {
            printf("UP ���\n\n");
            
        }
        else if(number == i)
        {
            printf("���ڸ� ���߼̾��~\n\n");
            break;
        }
        else
        {
            printf("�� ���� �ž� ��Ȯ�� ���ڸ� ������~\n\nS");
        }

        if(chance == 0)
        {
            printf("��~ ��� ��ȸ�� �پ��̳׿�^^ ������ %d�Դϴ�~\n", i);
            break;
        }
    }
    return 0;
}