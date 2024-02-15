#include<stdio.h>
#include<conio.h>
main()
{
	int f,s;
	clrscr();
	printf("Enter First number:");
	scanf("%d",&f);
	printf("\nEnter Second number:");
	scanf("%d",&s);
	if(f<s)
	{
		printf("Minimum value is: %d",f);
	}
	else
	{
		printf("Minimum value is: %d",s);
	}
	getch();
}