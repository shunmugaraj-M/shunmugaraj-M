#include<stdio.h>		
int main()
{
	int n,i,j,x=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=x;j++)
		{
			printf(" *");
			//printf("%c",i+64);
		}
		printf("\n");
	
	if(i<=n/2)
	{
	x++;	
	}
	else
	{
		x--;
		}	
	
	}
	return 0;
}
