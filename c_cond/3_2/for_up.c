# include <stdio.h>
int main(void)
{
    int i, num;

    printf("正の整数を入力：");
    scanf("%d",&num);

    for (i = 0; i <= num; i++) //0から1ずつ増やしてnumまで括弧内を繰り返す
    {
        printf("%d ",i);    //ループしているときのiの値を表示
    }
    printf("\n");

    return 0;
}