#include<stdio.h>
#include<conio.h>
main()
{
	float area,hight,base;
	clrscr();
	printf("hight");
	scanf("%f",&hight);
	printf("\nbase");
	scanf("%f",&base);
	area=(base*hight)/2;
	printf("Area of Triangle is %f",area);
	getch();
	return 0;
}
