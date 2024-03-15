#include<stdio.h>
main()
{
	int n;
	char title[n];
	
	printf("Enter any string:");
	scanf("%s",&title);
	
	int i;
	
		if(title[i] >= 'a' && title[i] <= 'z')
		{
			title[i]=title[i]-32;
		}
		for(i=1;i<n;i++)
		{
			if(title[i-1] ==' ' && title[i] >= 'a' && title[i] <= 'z')	
			{
				title[i]=title[i]-32;
			}
		}

	printf("Toggle case string: %s",title);
}
