//小明有 5 张数字卡片，上面分别为数字 1， 2， 3， 6， 9。小明想用这 5 张数字卡片组成一个最大的 5 位
//数，这个五位数是_______。
//编程：任意输入5个数字，将它们组合为最大的5位数输出。
#include <stdio.h>
int main(){
	int Arr[5],n,i,j;
	scanf("%d%d%d%d%d",&Arr[0],&Arr[1],&Arr[2],&Arr[3],&Arr[4]);
	for(i=0;i<5;i++)for(int j=0;j<5-i-1;j++){ if(Arr[j]<Arr[j+1]){n=Arr[j];Arr[j]=Arr[j+1];Arr[j+1]=n;}} 
	printf("%d%d%d%d%d",Arr[0],Arr[1],Arr[2],Arr[3],Arr[4]);
} 
