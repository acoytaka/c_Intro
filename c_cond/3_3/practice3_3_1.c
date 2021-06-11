/* whileループを使ったカウントダウン*/
# include <stdio.h>
int main(void)
{
    int num;

    printf("正の整数：");
    scanf("%d", &num);

    while (num >= 0)
    {
        printf("%d ", num);
        num--;  /*ループするたびにnumが1減るnum=num-1と同義*/
    }
    printf("\n");
    return 0;
}