#include<stdio.h>
int main()
{
	printf("\nEnter the number:-");
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	 if(i%3==0 && i%5==0)
		{
		printf("THREEFIVE");
			continue;
		}
		else{
			
		if(i%3==0)
		{  
			printf("\nTHREE");
			continue;
		}
		else if(i%5==0)
		{
				printf("\nFIVE");
			continue;
		
		}
	
		}
	
		printf("\n%d\n",i);
	}
return 0;	
}
