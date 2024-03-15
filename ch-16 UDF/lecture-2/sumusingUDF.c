#include<stdio.h>

int array(int arr[],int n)
{
	int i,sum=0;
	
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	
	}
		return sum;
}
int main()
{
	int i,n,res;
		
	printf("Enter array size:");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter array elements:");
		scanf("%d",&arr[i]);
	}
	res=array(arr,n);
	printf("The sum of an Array: %d\n",res);
	
	return 0;
}
