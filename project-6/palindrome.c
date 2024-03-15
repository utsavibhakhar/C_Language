#include<stdio.h>
main()
{
	char name;
	printf("Enter any string:");
	gets(name);
	
	
	char temp[strlen(name)];
	
	int k=strlen(name)-1;  //4
	
	for(int i=0;i<strlen(name);i++)
	{
		temp[k]=name[i];
		k--;
	}
	if(strcmp(temp,name)==0)
	{
		printf("this is palindrome string");
	}
	else
	{
			printf("this is not palindrome string");
	}
	
}
