#include<stdio.h>
#include<conio.h>
main()
{
	int f,n,l,sum=0;
	clrscr();

	printf("enter any number:");
	scanf("%d",&n);

	for(f=n;f>=10;f/=10)

		l=n%10;
		sum=f+l;

	printf("the sum of first & last digits: %d",sum);

	getch();
}