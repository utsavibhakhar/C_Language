#include<stdio.h>
#include<conio.h>
main()
{
	int num;
	clrscr();
	printf("Enter any Number:");
	scanf("%d",&num);
	if(num % 2 == 0)
	{
		printf("The number is Odd");
	}
	else
	{
		printf("The number is even");
	}
	getch();
}
