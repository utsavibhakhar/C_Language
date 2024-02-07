#include<stdio.h>
#include<conio.h>
main()
{
	int c,f;
	clrscr();
	printf("Enter  temperature:");
	scanf("%d",&c);
	f=(c*9/5)+32;
	printf("\nThe Temperature is Celions %d",f);

	getch();
	return 0;
}