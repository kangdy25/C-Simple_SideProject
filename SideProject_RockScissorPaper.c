#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
// ���� ���� ���� ���� ���� �̾ƾ���
// �׸��� scanf�� ���� �Է��� �ϵ��� �ϰ�
// if������ �̱� �� ��� �� �� ���� ����!!

    

    int com;
    int user;
    int result[3] = {0, };
    int cnt = 0;
    srand(time(NULL));
    
    while(1)
    {
        com = rand() % 3 + 1; // ��ǻ�Ͱ� ���������� �̱�

        printf("(1_����_     2_����_     3_��_    0_����)\n");
        printf("################�� ���� �� ��~ ����!����!��!!################\n");

        scanf("%d", &user);

        if(user > 0 && user < 4)
        {
            cnt++;
            printf("\n��ǻ�� : %s\n", (com  == 1 ? "����" : com  == 2 ? "����" : "��")); 
            printf("����� : %s\n\n", (user == 1 ? "����" : user == 2 ? "����" : "��")); 
            // ?�� ���� ������      num1(�� ������ �Ǵ��� ����) ? 100(True ��) : 200(False ��)
            if(com == user)
            {
                printf("�̷� ����...ũ��\n");
                result[1]++;
            }
            else if(((com == 1) && (user == 3)) ||
                    ((com == 2) && (user == 1)) ||
                    ((com == 3) && (user == 2)))
            {
                printf("�޷�~ ���� �̰����^^ ������\n");
                result[2]++;
            }
            else
            {
                printf("ũ��... ���� ���ٴ�;;\n");
                result[0]++;
            }
            printf("%d�� %d�� %d�� %d��\n\n", cnt, result[0], result[1], result[2]); 
        }
        else
        {
            if(user == 0)
            {
                printf("���� ���������� �� ��...? �׷� ������ ����\n");
                break;
                
            }
            printf("��ü �� �����ž�? ���������� ����� �ؾ���!!\n"); 
        }
    }


    return 0;
}