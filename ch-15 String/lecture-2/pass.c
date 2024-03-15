#include<stdio.h>

main()
{
	char pass[20];
	int big1=0,big2=0,big3=0,big4=0;
	
	printf("Create your password: ");
	gets(pass);
	
	int i;
	for(i=0;i<strlen(pass); i++)
	{
		if((pass[i]>=65 && pass[i]<=90))
		{
			big1++;
		}
		if(pass[i]>=97 && pass[i]<=122)
		{
			big2++;
		}
		if(pass[i]>=48 && pass[i]<=57)
		{
			big3++;	
		}
		if((pass[i]>=33 && pass[i]<=47) || (pass[i]>=58 && pass[i]<=64))
		{
			big4++;
		}
	}
	
	if(big1!=0 && big2!=0 && big3!=0 && big4!=0)
	{
		printf("Your password is Strong.");
   	} 
	else
	{
		printf("Your password is not Strong.");
	}
		
}

