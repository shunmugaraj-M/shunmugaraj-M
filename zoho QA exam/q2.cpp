#include<stdio.h>
int main()
{
	printf("\nEnter the number:-");
	int n,a=0,b=1,c,sum=0;
	scanf("%d",&n);
	printf("the fibonacci series are");
 while(a<=n)
 {
 	if(a%2==0)
 	sum=sum+a;
 	
	 	
 	c=a+b;
 	a=b;
 	b=c;
 
 	printf(" %d ",a);
 }
//	printf("%d",sum);

return 0;
	}
