#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("Enter Firth Value:");
	scanf("%d",&a);
	printf("Enter Second Value:");
	scanf("%d",&b);
	printf("Enter Third Value:");
	scanf("%d",&c);
	if(a==b && b==c)
	{
		printf("All are same...");
	}
		else if(a==b)
		{
			printf("A & B are same...");
		}
		     else if(a==c)
			{
				printf("B & C are same...");
			}
		      else if(b==c)
			{
				printf("A & C are same...");
			}

	else
	{

		if(a<b)
		{

		if(a<c)
		{
			printf("A is min");
		}
		else
		{
			printf("C is min");
		}
	}
		else
		{
			if(b<c)
			{
				printf("B is min ");
			}
			else
			{
				printf("C is min");
			}
		}
 }
	getch();
}