/* whileループを使ったカウントアップ*/
# include <stdio.h>
int main(void)
{
    int num, i;
    i = 0;

    printf("正の整数：");
    scanf("%d", &num);

    while (i <= num)
    {
        printf("%d ", i++); 
        
        /*これ一つで
            printf("%d ", i);
            i++;
        と同じ意味*/
    }
    printf("\n");
    return 0;
}