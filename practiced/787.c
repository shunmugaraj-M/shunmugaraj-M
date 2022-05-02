#include<stdio.h>
int main()
{
	int i,j,n=5,x=1;
	// pattern printing to     1  3  5  7 
	for(i=1;i<=n;i++)		 //9 11	 13 
	{						//15 17
		for(j=i;j<n;j++)	//19	
		{
			printf(" %2d",x);
			x=x+2;
		}
		printf(" \n");
	}
	return 0;
}
