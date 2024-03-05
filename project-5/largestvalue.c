#include<stdio.h>
main()
{
	int r,c;
	
	printf("Enter the array's row size:");
	scanf("%d",&r);
	printf("Enter the array's column size:");
	scanf("%d",&c);
	
	int i,j,max=0;
	int arr[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter array's elements:");
			scanf("%d",&arr[i][j]);	
		}
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(arr[i][j]>max)
			{
				max=arr[i][j];
				printf("The largest element is: %d",max);	
			}
			else
			{
				printf(" ");
			}
		}
		
	}
}
