#include<stdio.h>
main()
{
	int r,c,sum=0;
	
	printf("Enter Row:");
	scanf("%d",&r);
	printf("Enter column:");
	scanf("%d",&c);
	
	int array[r][c];
	int i,j;
	float num[100],avg;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter array elements:");	
			scanf("%f",&num[100]);
			sum+=array[r][c];
		}
	}
	avg=sum/(r*c);
	printf("\nAverage of an Array: %f",avg);
		
}
