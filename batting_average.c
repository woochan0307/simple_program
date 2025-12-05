#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(void)
{
    int bat, fair;
    float t;
    
    printf("이 프로그램은 야구 타율계산기 입니다.\n ");
    sleep(2);
    printf("당신의 타수를 알려주세요.\n");
    scanf("%d",&bat);
    sleep(1.5);
    printf("당신의 안타개수를 알려주세요.\n");
    scanf("%d",&fair);
    t = (float)fair / bat;
    sleep(2);
    printf("당신의 타율은 %.3f 입니다.",t);
        
            
    
    
    
    
    
}