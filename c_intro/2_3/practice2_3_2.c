#include <stdio.h>

int main(void)
{
    float n, m;

    printf("２つの実数を入力してください：");
    scanf("%f%f", &n, &m);

    printf("x + y = %f\n",n + m);
    printf("x - y = %.5f\n",n - m);
    printf("x * y = %.4f\n",n * m);
    printf("x / y = %.3f\n",n / m);
    printf("平均値 = %.2f\n",(n + m) / 2.0);

    return 0;
}