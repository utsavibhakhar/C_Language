#include<stdio.h>
#include<conio.h>
main()
{       int i,n,sum=0;
	clrscr();

	printf("enter any number:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		sum+=i;

	}
	printf("sum of all number: %d",sum);

	getch();

}