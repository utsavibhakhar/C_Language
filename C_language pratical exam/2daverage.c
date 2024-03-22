#include<stdio.h>
main()
{
	int r,c;
	printf("Enter number:");
	scanf("%d",&r);
	printf("Enter number:");
	scanf("%d",&c);

	int i,j,sum=0;
	float num[r][c];
	float avg;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter elements:");
			scanf("%f",&num[r][c]);		
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum+=num[r][c];
		}
	}
	avg=sum/num[r][c];
	printf("Average of value %f:",avg);
	
}
