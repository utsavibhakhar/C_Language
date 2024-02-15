#include<stdio.h>
#include<conio.h>
main()
{
	int n,i;
	clrscr();
	printf("Enter number:");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("%d ",i);
		i++;
	}
	getch();

}