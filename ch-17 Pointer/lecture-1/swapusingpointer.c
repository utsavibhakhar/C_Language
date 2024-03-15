#include<stdio.h>
main()
{
	int a,b;
	
	printf("Enter the value of x:");
	scanf("%d",&a);
	printf("Enter the value of y:");
	scanf("%d",&b);
	
	int *x,*y;
	x=&a;
	y=&b;
	
	printf("Before swapping:\n");
	printf("x=%d\n",a);
	printf("y=%d\n",b);
	
	*x=(*x)+(*y);
	*y=(*x)-(*y);
	*x=(*x)-(*y);
	
	printf("\nAfter swapping:\n");
	printf("x=%d\n",*x);
	printf("y=%d\n",*y);
}
