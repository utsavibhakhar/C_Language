#include<stdio.h>

int main()
{
	int i,j,s;
	
	for(i=5;i>=1;i--)
	{
		for(s=i;s>=1;s--)
		{
			printf(" ");
		}
			for(j=i;j<=5;j++)
			{
				printf("%d",i);
			}
		printf("\n");
	}
	
}
