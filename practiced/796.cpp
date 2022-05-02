#include<stdio.h>
int main()
{  // output 507  a decrease agum b increase agum so (21+18=39)13 iteration add agum 
	//  39*13=507
	int a=21,b=18,sum=0,temp;
	for(;a>=9;)
	{
		temp=a+b;
		if(temp%5>2)
		{
			sum=sum+temp;
		}
		a--;
		b++;
	}
	printf("%d",sum);
	return 0;
}


