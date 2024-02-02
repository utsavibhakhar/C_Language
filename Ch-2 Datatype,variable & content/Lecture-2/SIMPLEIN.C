#include<stdio.h>
#include<conio.h>
main()
{
	float simpleintest;
	int p,t,r;

	clrscr();

	printf("Principal:");
	scanf("%d",&p);
	printf("\nTime:");
	scanf("%d",&t);
	printf("rate:");
	scanf("%d",&r);
	simpleintest=(p*t*r)/100;
	printf("Simple intest is %f",simpleintest);
	getch();
	return 0;
}
