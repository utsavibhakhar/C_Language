#include<stdio.h>
#include<conio.h>
main()
{
	int num;
	clrscr();
	printf("Enter number:");
	scanf("%d",&num);

	(num%2==0)
		? printf("This is even number")
		: printf("This is odd number");
	getch();

}