#include<stdio.h>
#include<conio.h>

main()
{
	float pi=3.14;
	int radius;
	float area;

	clrscr();

	printf("Radius=");
	scanf("%d",radius);

	printf("radius %d\n",radius);
	area=(float)(pi*radius*radius);
	printf("Area of circule %f",area);

	getch();
	return 0;
}
