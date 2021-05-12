#include <stdio.h>

int main(void)
{
    int n1, n2, n3, max;

    printf("3つ整数を入力してください：");
    scanf("%d%d%d",&n1, &n2, &n3);

    max = n1;

    if (n2 > max)
    {
        max = n2;
    }
    if (n3 > max)
    {
        max = n3;
    }
    printf("一番大きい値は%dです．\n",max);
    
    return 0;
}