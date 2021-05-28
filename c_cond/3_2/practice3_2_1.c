# include <stdio.h>
int main(void)
{
    int i, num;

    printf("整数を入力してください：");
    scanf("%d",&num);

    for (i = 0; i <= num; i++) //0から1ずつ増やしてnumまで括弧内を繰り返す
    {
        printf("0");    //ループするたびに0を出力
    }
    printf("\n");

    return 0;
}