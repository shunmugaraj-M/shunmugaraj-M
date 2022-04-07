#include<stdio.h>
int main()
{
	printf("\nEnter the array size:-");
	int s;
	int arr[10];
	scanf("%d",&s);
	for(int i=0;i<s;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nThe entered elements are:-");
	for(int j=0;j<s;j++)
	{
		printf("%d",arr[j]);
	}
	 printf("\nEnter the element to search:-");
	 int x,count=0;
	 scanf("%d",&x);
	 for(int k=0;k<s;k++)
	 {
	 	if(arr[k]==x)
	 	{
	 		count++;
		}
	 }
	printf("\nNumber of occurence:-%d",count);
	return 0;
}
