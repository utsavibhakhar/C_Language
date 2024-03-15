#include<stdio.h>

void cube(int n,int u)
{		
	u=n*n*n;
	printf("Cube is%d:%d",n,u);
}
void main()
{	
	int n,u;
	
	printf("Enter any number:");
	scanf("%d",&n);
	
	cube(n,u);
}
	
