#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=6-i;j++)
		{
			printf("%d ",j%2);
		}
		printf("\n");
	}
}
