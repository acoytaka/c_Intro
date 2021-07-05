#include <stdio.h>

int main(void)
{
    int p[5];   /*5つ分の配列を宣言*/
    int i;

    for (i = 0; i < 5; i++)
    {
        p[i] = i + 1;
    } /*1,2,3と配列に入力していく*/
    
    printf("1つ目の配列の値 :%d\n", p[0]); //1つ目の配列の値を読み出し
    printf("4つ目の配列の値 :%d\n", p[3]); //4つ目の配列の値を読み出し

    return 0;
}