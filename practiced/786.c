#include<stdio.h>
int main()
{
	int i,j,n=5,x=1;
	for(i=n;i>=1;i--)       // this 5 to 1 process 
	{
		for(j=n;j>=i;j--)   // this n=i process  each tme x value will be updated 
		{
			
			x=x+2;
		}
//		printf(" \n");
//	}
	printf(" %2d",x);
}
	return 0;
}
