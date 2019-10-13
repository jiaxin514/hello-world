#include<stdio.h>
int main()
{
	int m,n,i,t;
	printf("请输入两个数字:");
	scanf("%d%d",&m,&n);
	if(m<n)
	{
		t=m;
		m=n;
		n=t;
	} 
	for(i=m;i>0;i++)
		if(i%m==0 && i%n==0)
		{ 
			printf("%d与%d的最小公倍数即为%d\n", m, n, i);
            break;
        } 
	
	return 0;
} 


