#include<stdio.h>
int main()
{
	int i,j,n=50236,rev=0;
	do
	{
		rev=rev*10;
		rev=rev+n%10;
		n=n/10;
	}while(n!=0);
	printf("%d",rev);
	return 0;
	
}
