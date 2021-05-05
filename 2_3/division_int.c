# include <stdio.h>

int main(void)
{
    int x, y;   //変数の宣言

    puts("2つの整数を入力してください．");
    printf("x：");  scanf("%d", &x);
    printf("y：");  scanf("%d", &y);

    printf("%dを%dで割った商は%d余り%d\n", x, y, x / y,x % y);
    //商 xをyで割った商（整数型の場合小数点以下は切り捨て）
    
    return 0;
}