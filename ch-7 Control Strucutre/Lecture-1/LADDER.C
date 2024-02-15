#include<stdio.h>
#include<conio.h>
main()
{
	int num;

	clrscr();
	printf("Enter any number:");
	scanf("%d",&num);
	if(num>0)
	{
		printf("This is positive value");
	}
	else if(num<0)
	{
		printf("This is Negative value");
	}
	else
	{
		printf("This is Neutral value");
	}
	getch();
}