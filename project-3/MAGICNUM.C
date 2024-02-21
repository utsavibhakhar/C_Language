#include<stdio.h>
#include<conio.h>

int main()
{
    int rev = 0, n, sum = 0, t;
    clrscr();

    printf("Enter any number: ");
    scanf("%d", &n);

    t = n;

    while(t > 0)
    {
	sum = sum + (t % 10);
	t = t / 10;
    }

    t=sum;

    while(t > 0)
    {

	rev = rev * 10 + t % 10;
	t = t / 10;
    }

    if(rev * sum == n)
    {
	printf("\nMagic number: %d\n", n);
    }
    else
    {
	printf("\nNot a magic number: %d\n", n);
    }

    getch();
}
