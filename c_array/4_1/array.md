# 配列

ごめんさい，サイトの更新全然できません．．．．．

## 配列とは

同じ型の変数をたくさん宣言するのは大変です．下のプログラムを見てみましょう．

```c
#include <stdio.h>

int main(void)
{
    int niigata;    /*新潟の人口*/
    int tokyo;      /*東京の人口*/
    int osaka;      /*大阪の人口*/
    int kyoto;      /*京都の人口*/
    int hokkaido;   /*北海道の人口*/
    int sum = 0;    /*合計*/

    printf("各都道府県の人口\n");
    printf("新潟県 :"); scanf("%d", &niigata); sum += niigata;
    printf("東京都 :"); scanf("%d", &tokyo); sum += tokyo;
    printf("大阪府 :"); scanf("%d", &osaka); sum += osaka;
    printf("京都府 :"); scanf("%d", &kyoto); sum += kyoto;
    printf("北海道 :"); scanf("%d", &hokkaido); sum += hokkaido;

    printf("人口の合計 :%d人\n", sum);
    printf("平均人口 : 約%.0f人\n",(float)sum/5);

    return 0;
}
```

```shell
各都道府県の人口
新潟県 :2304264
東京都 :13515271
大阪府 :8839469
京都府 :2610353
北海道 :5381733
人口の合計 :32651090人
```

このように今までは各県（変数）を宣言してプログラムを行っていました．

これからは今回でいうと人口のように同じジャンルの変数がたくさん必要なときに便利なのが配列です．

```c
#include <stdio.h>

int main(void)
{
    int p[5];   /*5つ分の配列を宣言*/
    int sum = 0;    /*合計*/

    printf("各都道府県の人口\n");
    printf("新潟県 :"); scanf("%d", &p[0]); sum += p[0];
    printf("東京都 :"); scanf("%d", &p[1]); sum += p[1];
    printf("大阪府 :"); scanf("%d", &p[2]); sum += p[2];
    printf("京都府 :"); scanf("%d", &p[3]); sum += p[3];
    printf("北海道 :"); scanf("%d", &p[4]); sum += p[4];

    printf("人口の合計 : %d人\n", sum);
    printf("平均人口 : 約%.0f人\n",(float)sum/5);

    return 0;
}
```

```shell
各都道府県の人口
新潟県 :2304264
東京都 :13515271
大阪府 :8839469
京都府 :2610353
北海道 :5381733
人口の合計 :32651090人
```

各都道府県ひとつひとつの変数を作成していましたが今回のプログラムでは，


## 課題（未完成）

課題通りの実行をすることができたら下記フォームに提出してください．
提出する際は大学のアカウントでログインしてください．

[https://forms.gle/fdx1f1xLhThL2Jb67](https://forms.gle/fdx1f1xLhThL2Jb67)
