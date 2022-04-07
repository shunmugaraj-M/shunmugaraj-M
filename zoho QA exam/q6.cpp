#include<stdio.h>
#include<conio.h>
void function(int,int);
void function(int arr[],int n)	
{
int first=0,second=0,third=0;

	for(int j=n-1;j>0;j--)
	{
	
		if(arr[j]>first)
		{
			second=first;
			first=arr[j];
		}
	}
	for(int j=0;j<n;j++)
	{
	 if(arr[j]>second && arr[j]<first)
		{	third=second;
			second=arr[j];
		}
	}
	for(int j=0;j<n;j++)
	{
		 if(arr[j]>third && arr[j]<second)
		{
			third=arr[j];
		}
	}
printf("%d\n",first);
printf("%d\n",second);
printf("%d\n",third);

printf("output: %d\n",(first+third));
}
int  main()
{
//	int arr[]={2,3,7,9,4,1};
	int arr[]={5,34,6,2,0,1};
	int n;
	n=sizeof(arr)/sizeof(arr[0]);
	function(arr,n);
		return 0;
}	
