#include<stdio.h>
int main()
{
	int rev=0,n=50236;
do{
	rev=rev*10;
	rev=rev+n%10;
	n=n/10;	
}
while(n>=10);
	printf("%d",rev);
	return 0;
}
