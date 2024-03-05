#include<stdio.h>

main()
{
	int n,sum=0;
	int a[n],b[n],c[n];
	
	printf("Enter array size:");
	scanf("%d",&n);
	
	
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter array A[%d] elements:",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		printf("\nEnter array B[%d] elements:",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
			printf("Array C is :  ");
			
	for(i=0;i<n;i++)
	{
		printf("%d, ",c[i]);
	}
	
}
