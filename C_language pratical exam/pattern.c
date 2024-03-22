#include<stdio.h>
main()
{
	int i,j,s;
	for(i=10;i>=6;i--)
	{
		for(s=6;s<i;s++)
		{
			printf(" ");
		}
		
		for(j=i;j<=10;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
