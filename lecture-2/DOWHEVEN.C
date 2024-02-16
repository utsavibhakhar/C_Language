#include<stdio.h>
#include<conio.h>
main()
{
	int n,i;
	clrscr();

	printf("Enter any number:\n");
	scanf("%d",&n);

	i=0;
	do
	{
		printf("%d",i);
		i+=2;
	}
	while(i<=n);

	getch();

}