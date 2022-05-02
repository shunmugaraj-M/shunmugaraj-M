#include<stdio.h>
#include<math.h>
int main()
{
	int size=5,i,j,k;
	for(i=size;i>=-size;i--)
	{
		for(j=1;j<=abs(i);j++)
		{
			printf(" ");
		}
		for(k=abs(i);k<=size;k++)
		{
			printf("%d",k);
		}
	printf("\n");
	}	
	return 0;
}
