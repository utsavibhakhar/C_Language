#include<stdio.h>
main()
{
	int n;
	
	printf("Enter array A's size:");
	scanf("%d",&n);
	
	int i;
	int a[n];
	int b[n];
	int c[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter array elements:");
		scanf("%d",&a[i]);
	}
	
	printf("Enter array B's size:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter array elements:");
		scanf("%d",&b[i]);
		c[i]=a[i]+b[i];
	}
	
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
		c[i+n]=b[i];
	}
	
	printf("Array C is:");
		
	for(i=0;i<c[i];i++)
	{
		printf("%d, ",c[i]);
	}
}
