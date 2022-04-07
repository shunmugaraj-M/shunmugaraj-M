#include<stdio.h>
int main()
{
	int n,arr[10],i;
	printf("Enter the array size:");
	scanf("%d",&n);
	printf("\ninput:\n");
for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}	
	printf("\noutput:\n");
	printf("%d\n",arr[0]);
for(i=0;i<n;i++)
	{
	//										// 8 1 2 2 17 1 5 5  
	////	                                         			// 16 17 4 3 5 2  output 16 17 5
		
		if(arr[i]>arr[i-1] || arr[i]==arr[i-1])
		{ 
			printf("%d\n",arr[i]);
		}

	}
	return 0;
}
