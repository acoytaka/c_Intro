#include <stdio.h>

int main(void)
{
    int n, m;

    printf("2つの整数を入力してください：");
    scanf("%d%d", &n,&m);

    if (n != m)     //条件分岐「2つの値が等しくないときに実行」
    {
        printf("値は等しくない\n");
    }
    else           //上の条件に当てはならない場合に実行
    {
        printf("値は等しい\n");
    }

    return 0;
}