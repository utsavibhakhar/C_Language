#include<stdio.h>
main()
{
	int n;
	
	printf("Enter array size:");
	scanf("%d",&n);
	
	int i;
	int a[n];

	for(i=0;i<n;i++)
	{
		printf("Enter array elements:");
		scanf("%d",&a[i]);	
	}
	
	printf("The square is:");
	
	for(i=0;i<n;i++)
	{
		printf("%d:",a[i]*a[i]);
	}
}
