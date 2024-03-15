#include<stdio.h>
void main()
{
	int n;
	printf("Enter the array's size:");
	scanf("%d",&n);
	
	int a[n],i;
	for(i=0;i<n;i++)
	{
		printf("Enter array elements:");
		scanf("%d",&a[i]);
	}
	int *p;
	p=&a[i-1];
	printf("Reversed array elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*p--);	
	}	
}
