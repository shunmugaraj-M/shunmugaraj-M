#include<stdio.h>
#include<conio.h>
int function(int,int);
int function(int arr[],int n)
{
	
	
	int i,j,sum=0,lsum=0,llsum=0;
	for(j=0;j<n;j++)
	{
		sum=sum+arr[j];	
	}
	for(i=0;i<n-1;i++)
	{
			lsum=lsum+arr[i];
			llsum=lsum+arr[i+1];
	
	if(sum-llsum==lsum)
		{
			return i+2;	
		}
	}
		if(n==1)
	{
		return 1;
	}
	return -1;	

}
int  main()
{
//	int arr[10]={1,3,5,2,2};
	int arr[10]={1,2,3};
//	int arr[]={1};
//	int arr[10]={1,2,3,4,3,2,1};
	int n,result;
	n=sizeof(arr)/sizeof(arr[0]);
	//printf("the size of array:%d",n);
	 result=function(arr,n);
	printf("%d",result);
	return 0;
}
