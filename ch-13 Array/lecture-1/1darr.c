#include<stdio.h>

main()
{
	int n,i,sum=0;
	float num[100],avg;
	
	printf("Enter array size:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter array:");
		scanf("%f",&num[i]);
		sum+=num[i];
	}
	avg=sum/n;
	printf("Average is %f",avg);
}
