#include<stdio.h>
main()
{
	int n;
	char upper[n];
	
	printf("Enter any string:");
	scanf("%s",&upper);

	int i;
	
	for(i=0;i<n;i++)
	{
		if(upper[i]>=97 && upper[i]<=122)
		{
			upper[i]=upper[i]-32;
		}
	}
	printf("Uppercase string: %s",upper);
}
