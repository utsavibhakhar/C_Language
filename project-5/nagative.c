#include<stdio.h>

main()
{
	int n;
	int a[n];
	
	printf("Enter array size:");
	scanf("%d",&n);
	
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter array [%d] elements:",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("Negative elements from an Array: %d",a[i]);
		}
		else
		{
			printf(" ");
		}
	}
}

