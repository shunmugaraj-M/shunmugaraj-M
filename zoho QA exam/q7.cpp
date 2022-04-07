#include<conio.h>
#include<stdio.h>
int main()
{
	int a[10][10];
	int n,length,i,j,x;
	printf("n=");
	scanf("%d",&n); printf("\n");

	for( i=0;i<n;i++)
	{
		for( j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered input:-\n");
		for(i=0;i<n;i++)
	{
		for( j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
		printf("length=");
	scanf("%d",&length); printf("\n");
	

		for(x=1;x<=length;x++)
		{
			a[0][0]=0;
			a[0][i-x]=0;	 		
			a[1][i-x]=0;
			a[j-x][0]=0;
			a[j-x][i-x]=0; 
		}
		printf("\n");
	
	printf("after processing\n");
		for(i=0;i<n;i++)
	{
		for( j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
