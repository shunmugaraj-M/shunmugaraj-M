#include<stdio.h>
int mem(int x,int y,int z)
{
	int r=x*y*z;
	return r;
}
int main()
{
	int result=1,a=1,i=5;
	do{
		result=mem(result,a,i);
		--i;
	}while(i>0);
	printf("%d",result);
	return 0;
}
