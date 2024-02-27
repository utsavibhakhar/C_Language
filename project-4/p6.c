#include<stdio.h>

int main()
{
	int i,j,s,k;
	
	for(i=5;i>=1;i--)
	{
		for(s=i;s>=1;s--)
		{
			printf(" ");
		}
		for(j=i;j<=5;j++)
		{
			printf("%d",j);
		}
		for(k=4;k>=i;k--)
				{
					printf("%d",k);
				}
		
		printf("\n");
		
	}
	
}

