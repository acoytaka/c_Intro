# include <stdio.h>
int main(void)
{
    int i, num;

    printf("整数を入力してください：");
    scanf("%d",&num);

    for (i = 2; i <= num; i += 2) //2n+2をfor文で表している（nは0からnumまで）
    {
        printf("%d",i);    //2n+2の答えを出力
    }
    printf("\n");

    return 0;
}