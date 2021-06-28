#include <stdio.h>

int main(void)
{
    int niigata;    /*新潟の人口*/
    int tokyo;      /*東京の人口*/
    int osaka;      /*大阪の人口*/
    int kyoto;      /*京都の人口*/
    int hokkaido;   /*北海道の人口*/
    int sum = 0;    /*合計*/

    printf("各都道府県の人口\n");
    printf("新潟県 :"); scanf("%d", &niigata); sum += niigata;
    printf("東京都 :"); scanf("%d", &tokyo); sum += tokyo;
    printf("大阪府 :"); scanf("%d", &osaka); sum += osaka;
    printf("京都府 :"); scanf("%d", &kyoto); sum += kyoto;
    printf("北海道 :"); scanf("%d", &hokkaido); sum += hokkaido;

    printf("人口の合計 : %d人\n", sum);
    printf("平均人口 : 約%.0f人\n",(float)sum/5);

    return 0;
}