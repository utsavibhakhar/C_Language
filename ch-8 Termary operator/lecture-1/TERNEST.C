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

	(a<b)
	?
		(a<c)
		?
			(a<d)
				? printf("A is minimum")
				: printf("D is minimum")
		:
			(c<d)
				? printf("C is minimum")
				: printf("D is minimum")
	:
		(b<c)
		?
			(b<d)
				? printf("B is minimum")
				: printf("D is minimum")
		:
			(c<d)
				? printf("C is minimum")
				: printf("D is minimum");


	getch();
}
