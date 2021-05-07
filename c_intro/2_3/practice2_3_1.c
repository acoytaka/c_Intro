#include <stdio.h>

int main(void)
{
    int n, m;

    printf("２つの整数を入力してください：");
    scanf("%d%d", &n, &m);

    printf("x + y = %d\n",n + m);
    printf("x - y = %d\n",n - m);
    printf("x * y = %d\n",n * m);
    printf("x / y = %d\n",n / m);
    printf("x %% y = %d\n",n % m);
    printf("平均値 = %f\n",(float)(n + m) / 2);

    return 0;
}