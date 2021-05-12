#include <stdio.h>

int main(void)
{
    int n;

    printf("整数を入力してください：");
    scanf("%d", &n);

    if (n == 0)     //条件分岐「値が0かどうか判別」
    {
        printf("値は0\n");
    }
    else if (n > 0) //条件分岐「値が正かどうか判別」
    {
        printf("値は正\n");
    }
    else            //上記の条件以外の場合実行
    {
        printf("値は負\n");
    }

    return 0;
}