#include <stdio.h>

int main(void)
{
    int n, m;      /*int型の変数nを宣言*/

    printf("整数を入力してください：");
    scanf("%d", &n);    /*変数nに整数値をキーボードから入力*/
    printf("整数を入力してください：");
    scanf("%d", &m);    /*変数nに整数値をキーボードから入力*/

    printf("%d + %d = %d", n, m, n + m);

    return 0;
}