#include<stdio.h>
#include<conio.h>
int  main()
{
	int n=5,N=14;
	for(int i=1;i<=n;i++)
	{
	printf("%d",i);
		for(int j=i-1;j<n;j++)
		{
			printf(" %c ",j+65);
		}	
		for(int x=i*2-1;x>i;x--)
		{
			printf("   %c ",N+65);	
		}	
		for(int j=n-1;j>i-2;j--)
		{
			printf(" %c",j+65);
		}
		printf("%d",i);
		printf("\n");
	}
	printf("");
return 0;	
}
