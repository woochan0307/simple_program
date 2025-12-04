#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
    int b;
    double c;
    double d;
    char a[20];
    double e;

    printf("당신의 이름은 영어로 알려주세요\n");
    scanf("%s", a);
    sleep(1);
    printf("안녕하세요. %s 님 저는 비만도 계산기입니다.\n", a);
    sleep(2.5);
    printf("%s님 나이를 알려주세요\n", a);
    scanf("%d", &b);
    sleep(1);
    printf("%s님 키를 cm단위로 알려주세요\n", a);
    scanf("%lf", &c);
    sleep(1);

    printf("%s님 몸무게를 알려주세요\n", a);
    scanf("%lf", &d);
    sleep(1);
    printf("측정완료\n");
    sleep(3);
    c = c / 100;   
    e = d / (c * c);

    if (e < 18.5)
        printf("%s님의 나이는 %d세 이고, BMI는 %.1lf, 저체중입니다.\n", a,b, e);

    else if (e <= 22.9)
        printf("%s님의 나이는 %d세 이고, BMI는 %.1lf, 정상체중입니다.\n", a,b, e);

    else if (e <= 24.9)
        printf("%s님의 나이는 %d세 이고, BMI는 %.1lf, 과체중입니다.\n", a,b, e);

    else
        printf("%s님의 나이는 %d세 이고, BMI는 %.1lf, 비만입니다.\n", a, b,e);

    return 0;
}
