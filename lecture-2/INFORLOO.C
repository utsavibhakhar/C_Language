#include<stdio.h>
#include<conio.h>
main()
{
	int n,i;
	clrscr();

	printf("Enter any number:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("%d",i);
	}
	getch();

}