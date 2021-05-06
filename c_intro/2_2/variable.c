#include <stdio.h>

int main(void)
{
    int n, m;       /* nとmというint型の変数を宣言 */

    n = 12;         /* 変数nに値12を代入 */
    m = n + 20;     /* 変数mに変数nに20を足したもの代入 */

    printf("nの値は%dでmの値は%dです．\n",n,m);     /* 変数nと変数mの値を表示 */

    return 0;
}