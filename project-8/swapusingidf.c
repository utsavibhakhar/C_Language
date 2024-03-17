#include<stdio.h>
int swap(int *a,int *b)
{
	*a=(*a)+(*b);
	*b=(*a)-(*b);
	*a=(*a)-(*b);
}
void main()
{
	int *a;
	int *b;
	printf("A=");
	scanf("%d",&a);
	printf("B=");
	scanf("%d",&b);
	swap(&a,&b);
	printf("A=%d\n",a);
	printf("B=%d\n",b);	
}
