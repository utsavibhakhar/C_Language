#include<stdio.h>
#include<conio.h>
main()
{
	float area,hight,width;
	clrscr();
	printf("hight");
	scanf("%f",&hight);
	printf("\nwidth");
	scanf("%f",&width);
	area=hight*width;
	printf("Area of Rectangle is",area);
	getch();
	return 0;

}