# include <stdio.h>

int main(void)
{
    int x, y;   //変数の宣言

    puts("2つの整数を入力してください．");
    printf("x：");  scanf("%d", &x);
    printf("y：");  scanf("%d", &y);

    printf("x + y = %d\n", x + y);  //和
    printf("x - y = %d\n", x - y);  //差
    printf("x * y = %d\n", x * y);  //積
    printf("x / y = %d\n", x / y);  //商 xをyで割った商（整数型の場合小数点以下は切り捨て）
    printf("x %% y = %d\n", x % y); //乗除 xをyで割った余り

    return 0;
}