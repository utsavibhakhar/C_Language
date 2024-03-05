#include<stdio.h>

main()
{
	int n;
	
	printf("Enter Array size:");
	scanf("%d",&n);
	
	int i,min;
	int array[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter Array size:");
		scanf("%d",&array[i]);		
	}
	
	for(i=0;i<n;i++)
	{
		if(array[i]<min)	
			min=array[i];
	}
	printf("%d is the min value",min);
}
