#include<stdio.h>
#include<conio.h>
main()
{
	int n,rev=0,rem;
	clrscr();

	printf("enter number:");
	scanf("%d",&n);

	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}

	printf("Reversed number=%d",rev);

	getch();

}