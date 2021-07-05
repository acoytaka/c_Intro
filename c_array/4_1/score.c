/*
    任意の人数の学生の合計点と平均点を算出
*/
#include <stdio.h>

int main(void)
{
    // 学生数の宣言
    int num;
    printf("学生数：");scanf("%d",&num);

    // 学生の数だけ配列を用意
    int score[num];   /*人数分の配列を宣言*/
    int sum = 0;    /*学生の合計点を代入*/

    // 学生の点数を入力する処理
    int i;
    for (i = 1; i <= num; i++)
    {
        printf("学生%dの点数:",i);
        scanf("%d",&score[i]);//i番目の学生の点数を入力
        sum += score[i];
    }
    
    printf("%d人の学生の合計点数 :%d\n", num, sum); //1つ目の配列の値を読み出し
    printf("%d人の学生の平均点数 :%d\n", num, sum/num); //4つ目の配列の値を読み出し

    return 0;
}