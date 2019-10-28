//实现代码判断2个float变量相等
//误差精确到时小数点后5位
  
#include<stdio.h>
int main(){
	float a,f1,f2;
	scanf("%f%f",&f1,&f2);
	a = f1 - f2;
	if(a<0.00001){
		printf("这两个浮点数相等"); 
	}else{
		printf("这两个浮点数不相等"); 
	}
	return 0; 
} 
