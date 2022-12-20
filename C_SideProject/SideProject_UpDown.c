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
        printf("남은 기회 %d번\n", chance--);
        printf("숫자를 선택하세요 (1 ~ 100):  ");
        scanf("%d", &number);

        if(i < number)
        {
            printf("DOWN ↓↓\n\n");
            
        }
        else if(number < i)
        {
            printf("UP ↑↑\n\n");
            
        }
        else if(number == i)
        {
            printf("숫자를 맞추셨어요~\n\n");
            break;
        }
        else
        {
            printf("뭘 누른 거야 정확한 숫자를 눌러봐~\n\nS");
        }

        if(chance == 0)
        {
            printf("땡~ 모든 기회를 다쓰셨네요^^ 정답은 %d입니다~\n", i);
            break;
        }
    }
    return 0;
}