#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,z;
    clrscr();

    printf("X is:");
    scanf("%d",&x);
    printf("\nY is:");
    scanf("%d",&y);
    z=(x+y)*(x+y);
    printf("\nThe result is %d",z);

    getch();
    return 0;
}