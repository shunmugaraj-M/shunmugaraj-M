#include<stdio.h>
int main()
{
	int i,j,k,n=5;
	for(i=0;i<n;i++)
	{printf("\n");
		for(j=0;j<i;j++)
		{
			printf("-");
		}
		for(j=0;j<=i;j++)
		{
			printf( " *");
		}
	}
	
	for(i=n-1;i>0;i--)
	{printf("\n");
			for(j=1;j<i;j++)
		{
			printf("-");
		}
		for(j=1;j<=i;j++)
		{
			printf( " *");
		}
		
	}
}
