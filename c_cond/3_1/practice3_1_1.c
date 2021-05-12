#include <stdio.h>

int main(void)
{
    int n;

    printf("整数を入力してください：");
    scanf("%d",&n);

    if (n > 0)
    {
        printf("絶対値：%d\n",n);
    }else
    {
        printf("絶対値：%d\n",-n);
    }
    
    return 0;
}