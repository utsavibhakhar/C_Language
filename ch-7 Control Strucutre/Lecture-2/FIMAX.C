#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,e;
	clrscr();
	printf("Enter First value:");
	scanf("%d",&a);
	printf("Enter Second value:");
	scanf("%d",&b);
	printf("Enter Third value:");
	scanf("%d",&c);
	printf("Enter Fourth value:");
	scanf("%d",&d);
	printf("Enter Fifth value:");
	scanf("%d",&e);
	if(a==b && b==c && c==d && d==e)
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
	if(a==e)
	{
		printf("A & E are same...");
	}
	if(b==c)
	{
		printf("B & C are same...");
	}
	if(b==d)
	{
		printf("B & D are same...");
	}
	if(b==e)
	{
		printf("B & E are same...");
	}
	if(c==d)
	{
		printf("C & D are same...");
	}
	if(c==e)
	{
		printf("C & E are same...");
	}
	if(d==e)
	{
		printf("D & E are same...");
	}
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{

				if(a>e)
				{
					printf("A is max");
				}
				else
				{
					printf("E is max");
				}
			}
			else
			{
				if(d>e)
				{
					printf("D is max");
				}
				else
				{
					printf("E is max");
				}
			}
		}
		else
		{
			if(c>d)
			{
				if(c>e)
				{

					printf("C is max");
				}
				else
				{
					printf("E is max");
				}
			}
		else
		{
			if(d>e)
			{
				printf("D ia max");
			}
			else
			{
				printf("E is max");
			}
		}
	}
}
		else
		{
			if(b>c)
			{
				if(b>d)
				{
					if(b>e)
					{
						printf("B is max");
					}

				else
				{
					printf("E is max");
				}
			}

			else
			{
				if(d>e)
				{
					printf("D is max");
				}
				else
				{
					printf("E is max");
				}
			}
		}
		else
		{
		       if(c>d)
			{
				if(c>e)
				{
					printf("C is max");
				}
				else
				{
					printf("E is max");
				}
			}

		else
		{
			if(d>e)
			{
				printf("D is Max");
			}
			else
			{
				printf("E is max");
			}
		}
	}
}
	getch();
}
