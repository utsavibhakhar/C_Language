#include<stdio.h>
#include<conio.h>
main()
{
	int f,s,i,n,t;
	f=0;
	s=1;
	clrscr();

	printf("Enter Any number:\n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		if(i<=1)
		       t=i;
		else
		{
			t=f+s;
			f=s;
			s=t;
		}
		printf("%d",t);
	}

	getch();
}