#include <stdio.h>

int main(void)
{
    int n;      /*int型の変数nを宣言*/

    printf("整数を入力してください：");
    scanf("%d", &n);    /*変数nに整数値をキーボードから入力*/

    printf("%d + 5 = %d",n , n + 5);

    return 0;
}