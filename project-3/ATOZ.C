#include<stdio.h>
#include<conio.h>
main()
{
	char first='a';
	clrscr();

	do
	{
		printf("%c ",first);
		first+=4;
	}
	while(first<='z');

	getch();

}