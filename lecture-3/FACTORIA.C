#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,fact=1;
	clrscr();

	printf("Enter any number:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial number: %d",fact);

	getch();
}