#include<stdio.h>
int main()
{
	int i,n,j,k;
	scanf("%d",&n);	
	for(i=1;i<=n;i++)
	{ printf("\n");
		for(j=n;j>=1;j--)
		{
			if(i>=j)
			printf("%d",j);
		else
			printf(" ");
		}
	}
return 0;
}
