#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
// 먼저 가위 바위 보를 컴이 뽑아야제
// 그리고 scanf로 내가 입력을 하도록 하고
// if문으로 이길 때 비길 때 질 때를 정의!!

    

    int com;
    int user;
    int result[3] = {0, };
    int cnt = 0;
    srand(time(NULL));
    
    while(1)
    {
        com = rand() % 3 + 1; // 컴퓨터가 가위바위보 뽑기

        printf("(1_가위_     2_바위_     3_보_    0_종료)\n");
        printf("################안 내면 진 거~ 가위!바위!보!!################\n");

        scanf("%d", &user);

        if(user > 0 && user < 4)
        {
            cnt++;
            printf("\n컴퓨터 : %s\n", (com  == 1 ? "가위" : com  == 2 ? "바위" : "보")); 
            printf("사용자 : %s\n\n", (user == 1 ? "가위" : user == 2 ? "바위" : "보")); 
            // ?는 삼항 연산자      num1(참 거짓을 판단할 변수) ? 100(True 값) : 200(False 값)
            if(com == user)
            {
                printf("이런 비겼네...크흠\n");
                result[1]++;
            }
            else if(((com == 1) && (user == 3)) ||
                    ((com == 2) && (user == 1)) ||
                    ((com == 3) && (user == 2)))
            {
                printf("메롱~ 내가 이겼찌롱^^ 낄낄낄\n");
                result[2]++;
            }
            else
            {
                printf("크윽... 내가 지다니;;\n");
                result[0]++;
            }
            printf("%d전 %d승 %d무 %d패\n\n", cnt, result[0], result[1], result[2]); 
        }
        else
        {
            if(user == 0)
            {
                printf("나랑 가위바위보 안 해...? 그럼 다음에 하자\n");
                break;
                
            }
            printf("대체 뭘 누른거야? 가위바위보 제대로 해야지!!\n"); 
        }
    }


    return 0;
}