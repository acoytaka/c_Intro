#include <stdio.h>

int main(void)
{
    int n, m;
    int w;

    printf("２つの整数を入力してください：");
    scanf("%d%d", &n, &m);

    w = n + m;
    
    printf("%d + %d = %d",n , m, w);

    return 0;
}