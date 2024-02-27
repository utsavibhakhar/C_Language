#include<stdio.h>

int main()
{
	
	int i,j,size=5;
	
	for(i=1;i<=size;i++)
	{
		for(j=1;j<=size;j++)
		{
			if(i==2 && (j>1 && j<5) || i==4 && (j>1 && j<5) || i==5 && (j>1 && j<5))
			{
				printf("  ");
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}
}
