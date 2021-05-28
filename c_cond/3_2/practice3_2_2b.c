# include <stdio.h>
int main(void)
{
    int i, num;

    printf("整数を入力してください：");
    scanf("%d",&num);

    for (i = 1; i <= num; i ++) //1から1ずつ増やしてnumまで括弧内を繰り返す
    {
        if (i%2 == 0)   //2で割り切れたときのみ括弧内を実行
        {
            printf("%d",i); 
        }
    }
    printf("\n");

    return 0;
}