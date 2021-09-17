# Switch文

条件分岐ではif文とwhile文を使おうという話をしました．
したくさんの条件分岐が必要な場合Switch文が便利な場合があります．

しかし，Switch文はミスが起こりやすいもので近年話題に上がるPythonという言語では実装すらされていません．

## Switch文とは

今回はどのように使うかだけを解説します．

数値の値で処理を変えたい場合．

if文では

```c
#include <stdio.h>

int main(void){
  int num;

  num = 2;

  if(num==1){
      printf("数値は1\n");
  }
  else if(num==2){
      printf("数値は2\n");
  }
  else if(num==3){
      printf("数値は3\n");
  }
  else{
      printf("他の値\n");
  }

  return 0;
}
```

swich文では

```c
#include <stdio.h>

int main(void){
  int num;

  num = 2;

  switch(num){
    case 1:
      printf("数値は1\n");
      break;
    case 2:
      printf("数値は2\n");
      break;
    case 3:
      printf("数値は3\n");
      break;
    default:
      printf("他の値\n");
  }

  return 0;
}
```

というようになります．どちらも出力は同じになります．

Switch文のメリットとして，変数numを一回書いているだけで条件分岐していることがわかります．

このように一回だけ呼び出しているため，Switch文のほうが速度が早い場合がおおいです．
