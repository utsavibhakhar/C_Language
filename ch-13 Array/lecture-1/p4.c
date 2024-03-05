#include<stdio.h>
main()
{
	int n;
	printf("Enter of the array size=");
	scanf("%d",&n);
	
	int marks[n],i;
	for(i=0;i<n;i++)
	{
		printf("\nEnter the all marks");
		scanf("%d",&marks[i]);
		
		if(marks[i]>=30)
		{
			printf("\n marks%d is pass");
		}
		else
		{
			printf("\n marks%d is fail");
		}
	}
	
}

