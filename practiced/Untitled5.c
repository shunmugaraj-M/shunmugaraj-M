#include<stdio.h>		// unsuccessful own try program 
int main()
{
	char i,j,n;
	scanf("%c",n);
for(i="A";i<=n;i++)
{
	for(j=i;j<=n;j--)
	{
		if(i>=j)
		printf("%c",j);
		else
		{
			printf(" ");
		}
	}printf("\n");
}
	
	return 0;
}
