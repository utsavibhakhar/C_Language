#include<stdio.h>
int main()
{
	FILE *ptr;
	int i;
	
	ptr = fopen("cat.txt","w");
	if(ptr==NULL)
	{
		printf("can't create file...");
	}
	else
	{
		printf("create file");
		for(i=1;i<=50;i++)
		{
			if(i%3==0 && i%5==0)
			{
				fprintf(ptr,"%d divisiable by 3 & 5\n",i);
			}
		}	
	}
	return 0;
}
