#include<stdio.h>

int length(char str[])
{
	int i,length=0;
	
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	return length;
}

int main()
{
	int str[50];
	
	printf("Enetr any string:");
		scanf("%s",&str);
	int len=length(str);	
	printf("\nLength of an array %d\n",len);
	return 0;	
}
