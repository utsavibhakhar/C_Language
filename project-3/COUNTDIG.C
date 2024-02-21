#include<stdio.h>
#include<conio.h>
main()
{
	int n,c=0;
	clrscr();

	printf("Enter any number:");
	scanf("%d",&n);

	while(n!=0)
	{
		n/=10;
		c++;
	}
	printf("Total number of digits %d",c);

	getch();

}