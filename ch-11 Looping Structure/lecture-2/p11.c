#include<stdio.h>

int main()
{
	int i,j,s;
	
	for(i=1;i<=5;i++)
	{	
		for(s=i;s<5;s++)
		{
			printf(" ");
		}
		
			for(j=1;j<=i;j++)
			{
				printf("*");
			}
		
				for(j=i-1;j>=1;j--)
				{
					printf("*");
				}
		printf("\n");
	}	
}
	