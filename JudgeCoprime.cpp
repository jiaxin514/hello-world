#include<stdio.h>
int main()
{
    int m,n,t,r;
    printf("������������:"); 
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
	if(n==1) {printf("������������\n");} 
	else {printf("��������������\n"); } 
    return 0; 
}
