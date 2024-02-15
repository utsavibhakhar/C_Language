#include<stdio.h>
#include<conio.h>
main()
{
	int f,s;
	clrscr();
	printf("Enter First number:");
	scanf("%d",&f);
	printf("Enter Second number");
	scanf("%d",&s);

	while(f<=s)
	{
		if(f%4==0)

			printf("%d ",f);
			f++;

	}
	getch();

}