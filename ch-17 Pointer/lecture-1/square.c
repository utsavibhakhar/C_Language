#include<stdio.h>
main()
{
	int n;
	
	printf("Enter the array's size:");
	scanf("%d",&n);
	
	int a[n];
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("Enter array elements:");
		scanf("%d",&a[i]);
	}
	int *p;
	p=&a[0];
	
	for(i=0;i<n;i++)
	{
		*p=(*p)*(*p);
		printf("Square of each element: %d\n",*p++);
	}
}
