#include<stdio.h>
main()
{
	char str[100],c;
	int i,count=0;
	
	printf("Enter any string:");
	gets(str);
	
	printf("Frequency of each letter: \n");
	
	for(c='a';c<='z';c++)
	{
		count=0;
		
	for(i=0;str[i]!='\0';i++)
	{
		if(c==str[i])
			count++;
	}
			if(count>0)
			
				printf("%c => %d\n",c,count);
	}
}
