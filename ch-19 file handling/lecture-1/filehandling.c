#include<stdio.h>
void main()
{
	FILE *lion;
	FILE *dog;
	char n;

	lion=fopen("lion.txt","r");
	dog=fopen("doggy.txt","w");
	
	if(lion==NULL && dog==NULL)
	{
		printf("Can't create file...");
	}
	else
	{
		printf("create file...");
		n=fgetc(lion);
		while(n!=EOF)
		{
			fputc(n,dog);	
			n=fgetc(lion);
		}
	}
}
