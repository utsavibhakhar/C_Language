#include<stdio.h>
int main()
{
	char n[50];
	printf("Enter any string:");
	scanf("%s",&n);
	int length=0;
	length=strlen(n);
	char *p;
	p=&n;
	
	while(*p!='\0')
	{
		length++;
		p++;
	}
	printf("The length of a string is: %d",length);
}
