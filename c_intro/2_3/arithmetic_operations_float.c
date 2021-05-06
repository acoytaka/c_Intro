# include <stdio.h>

int main(void)
{
    float x, y;   //変数の宣言

    puts("2つの数を入力してください．");
    printf("x：");  scanf("%f", &x);
    printf("y：");  scanf("%f", &y);

    printf("x + y = %f\n", x + y);  //和
    printf("x - y = %f\n", x - y);  //差
    printf("x * y = %f\n", x * y);  //積
    printf("x / y = %f\n", x / y);  //商 xをyで割った商

    return 0;
}