#include<stdio.h>
int main()                                                                                                         
{
	int i,j,n=5,x=2;
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=1;j--)
		{
			printf(" %2d",i*j);
		//	printf(" %2d",x);
			x=x+2;
		}
		printf(" \n");
	}
	return 0;
}
