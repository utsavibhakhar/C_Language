#include<stdio.h>
	
main()

{
	int f,s,i,j=0,a[100];
	
	printf("Enter the First year=");
	scanf("%d",&f);
	
	printf("Enter the Second year=");
	scanf("%d",&s);
	
	for(i=f;i<=s;i++)
	{
		if(i%2==0)
		{
			a[j]=i;
			j++;
		}
	}
	
	for(i=0;i<j;i++)
	{
		printf("The array is a[%d]=%d\n",i,a[i]);
	}
}
