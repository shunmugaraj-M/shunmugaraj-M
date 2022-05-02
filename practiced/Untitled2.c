#include<stdio.h>
int main()
{
	char i,n,j;
	scanf("%c",&n);
	for(i='A';i<=n;i++)
	{ printf("\n");
		for(j='A';j<=i;j++)
		{
			printf("%c ",j);
		}
	}
}
