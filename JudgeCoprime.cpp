#include<stdio.h>
int main()
{
    int m,n,t,r;
    printf("输入两个数字:"); 
    scanf("%d%d",&m,&n);
    if(m<n){	
  		t=m;
		m=n;
		n=t;
 	}	
 	r=m%n;
 	while(r){
  		m=n;
  		n=r;
  		r=m%n;
 	}
	if(n==1) {printf("这两个数互质\n");} 
	else {printf("这两个数不互质\n"); } 
    return 0; 
}
