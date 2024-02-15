#include<stdio.h>
#include<conio.h>
main()
{
	int n,i;
	clrscr();
	printf("Enter number:");
	scanf("%d",&n);
	i=1;
	while(n>=i)
	{
		printf("%d ",n);
		n--;
	}
	getch();

}