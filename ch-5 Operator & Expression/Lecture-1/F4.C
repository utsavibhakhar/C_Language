#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,z,u;
    clrscr();

    printf("X is:");
    scanf("%d",&x);
    printf("\nY is:");
    scanf("%d",&y);
    printf("\nZ is :");
    scanf("%d",&z);
    u=(x+y+z)*(x+y+z);
    printf("\nThe result is %d",u);

    getch();
    return 0;
}

