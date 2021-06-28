#include <stdio.h>

int main(void)
{
    int p[5];   /*5つ分の配列を宣言*/
    int sum = 0;    /*合計*/

    printf("各都道府県の人口\n");
    printf("新潟県 :"); scanf("%d", &p[0]); sum += p[0];
    printf("東京都 :"); scanf("%d", &p[1]); sum += p[1];
    printf("大阪府 :"); scanf("%d", &p[2]); sum += p[2];
    printf("京都府 :"); scanf("%d", &p[3]); sum += p[3];
    printf("北海道 :"); scanf("%d", &p[4]); sum += p[4];

    printf("人口の合計 : %d人\n", sum);
    printf("平均人口 : 約%.0f人\n",(float)sum/5);

    return 0;
}