#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	clrscr();
	printf("Enter First value:");
	scanf("%d",&a);
	printf("Enter Second value:");
	scanf("%d",&b);
	printf("Enter Third value:");
	scanf("%d",&c);
	printf("Enter Fourth value:");
	scanf("%d",&d);
	if(a==b && b==c && c==d)
	{
		printf("All are same...");
	}
	if(a==b)
	{
		printf("A & B are same...");
	}
	if(a==c)
	{
		printf("A & C are same...");
	}
	if(a==d)
	{
		printf("A & D are same...");
	}
	if(b==c)
	{
		printf("B & C are same...");
	}
	if(b==d)
	{
		printf("B & D are same...");
	}
	if(c==d)
	{
		printf("C & D are same...");
	}
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("A is max");
			}
			else
			{
				printf("D is max");
			}

		}
		else
		{
			if(c>d)
			{
				printf("C is max");
			}
			else
			{
				printf("D is max");
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("B is max");
			}
			else
			{
				printf("D is max");
			}
		}
		else
		{
			if(c>d)
			{
				printf("C is max");
			}
			else
			{
				printf("D is max");
			}
		}
	}
	getch();
}
