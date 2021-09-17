#include <stdio.h>
 
int main(void) {
    int num = 1; // int型変数
    int *point; // int型ポインタ変数
    point = &num; // ポインタ変数pointに変数numアドレスを代入
    
    printf("numの値:%d\n", num);
    printf("pointに代入されたアドレスの中身の値:%d\n", *point);
    printf("numのアドレス:%p\n", &num);
    printf("pointに代入されたアドレス:%p\n", point); // アドレスをprintfで標準出力する際は「%p」
 
    return 0;
}