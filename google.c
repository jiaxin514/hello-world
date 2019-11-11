//f(n)函数的定义为0~n中包含的1的个数
//f(13)是0~13中包含1的有 1，10，11，12，13，所以f(13)=6
//f(1) = 1。
//求另一个f(n)=n的n值
#include <stdio.h>
#define max 200000
int get_one(int n){
    int num = 0;
    unsigned int i = 1;
    for(i; i <=n; i++){
        if(i%10==1)num++;
        if(i/10%10==1)num++;
        if(i/100%10==1)num++;
        if(i/1000%10==1)num++;
        if(i/10000%10==1)num++;
        if(i/100000%10==1)num++;
    }
    return num;
}
int main() {
    for(int n = 2; n < max; n++){
        printf("正在计算：%d\n",n);
        if(get_one(n)==n){
            printf("答案：%d\n",n);
            break;
        }
    }
    return 0;
}
