#include<stdio.h>
main()
{
	FILE *even;
	FILE *odd;
	int n,m;

	even=fopen("even.txt","w");
	odd=fopen("odd.txt","w");
	if(even==NULL && odd==NULL)
	{
		printf("Can't create file...");
	}
	else
	{
		printf("create file...");
		n=fgetc(even);
		for(n=50;n<=70;n++)
		{
			if(n%2!=0)
			{
				fprintf(even,"%d \n",n);
				n++;
			}
		}
		m=fgetc(odd);
		for(m=50;m<=70;m++)
		{
			if(m%2==0)
			{
				fprintf(odd,"%d \n",m);
				m++;
			}
		}
	}
}
