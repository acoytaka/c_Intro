/* xoを交互に出力*/
# include <stdio.h>
int main(void)
{
    int num;

    printf("正の整数：");
    scanf("%d", &num);

    if(num >= 1)
    {
        int i = 1;

        while (i <= num)
        {
            if (i % 2)  
            {
                printf("x");
            }
            else
            {
                printf("o");
            }
            i++;
        }
    }
    printf("\n");
    return 0;
}