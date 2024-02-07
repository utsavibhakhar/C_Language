#include<stdio.h>
#include<conio.h>
main()
{
	int b,h,d,t,u;
	clrscr();
	printf("Base Salary:");
	scanf("%d",&b);
	printf("HRA:");
	scanf("%d",&h);
	printf("DA:");
	scanf("%d",&d);
	printf("TA:");
	scanf("%d",&t);
	u=b+(b*h/100)+(b*d/100)+(b*t/100);
	printf("Rs. %d",u);
	getch();
	return 0;
}

