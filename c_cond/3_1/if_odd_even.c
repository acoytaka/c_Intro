#include <stdio.h>

int main(void)
{
    int n;

    printf("整数を入力してください：");
    scanf("%d", &n);

    if (n % 2)     //条件分岐「もしも奇数なら波カッコ内を実行」 
    {
        printf("値は奇数\n");
    }
    else           //上の条件に当てはならない場合に実行
    {
        printf("値は偶数\n");
    }

    return 0;
}