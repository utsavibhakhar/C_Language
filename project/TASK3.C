#include<stdio.h>
#include<conio.h>
main()
{
	int f,s,t,u;
	clrscr();
	printf("First value:");
	scanf("%d",&f);
	printf("\nSecond Value:");
	scanf("%d",&s);
	u=180-f-s;
	printf("\nThird value: %d",u);
	getch();
	return 0;

}
