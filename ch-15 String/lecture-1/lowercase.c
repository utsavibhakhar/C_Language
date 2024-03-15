#include<stdio.h>
main()
{
	int n;
	char lower[n];
	
	printf("Enter any string:");
	scanf("%s",&lower);

	int i;
	
	for(i=0;i<n;i++)
	{
		if(lower[i]>=65 && lower[i]<=90)
		{
			lower[i]=lower[i]+32;
		}
	}
	printf("lowercase string: %s",lower);
}
