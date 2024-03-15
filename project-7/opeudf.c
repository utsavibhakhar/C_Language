#include<stdio.h>

int addition(int a,int b)
{
	printf("Addition of and is %d",a+b);
}
int substraction(int a,int b)
{
	printf("Substraction of and is %d",a-b);
}
int multiplication(int a,int b)
{
	printf("Multiplication of and is %d",a*b);
}
int division(int a,int b)
{
	printf("Division of and is %d",a/b);
}
int modual(int a,int b)
{
	printf("Modual of and is %d",a%b);
}

int main()
{
	int choice,a,b;
	do{
	
	printf("Press 1 for +\n");
	printf("Press 2 for -\n");
	printf("Press 3 for *\n");
	printf("Press 4 for /\n");
	printf("Press 5 for %\n");
	printf("Press 0 for the exit\n");
	
	printf("Enter your Choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Enter the first number:");
			scanf("%d",&a);
			printf("Enter the second number:");
			scanf("%d",&b);
			
			addition(a,b);
			
			break;
		
		case 2:
				printf("Press 1 for +\n");
				printf("Press 2 for -\n");
				printf("Press 3 for *\n");
				printf("Press 4 for /\n");
				printf("Press 5 for %\n");
				printf("Press 0 for the exit\n");

			printf("\nEnter your Choice:");
			scanf("%d",&choice);
			printf("\nEnter the first number:");
			scanf("%d",&a);
			printf("Enter the second number:");
			scanf("%d",&b);
			
			substraction(a,b);
			
			break;
			
		case 3:
				printf("Press 1 for +\n");
				printf("Press 2 for -\n");
				printf("Press 3 for *\n");
				printf("Press 4 for /\n");
				printf("Press 5 for %\n");
				printf("Press 0 for the exit\n");

			printf("\nEnter your Choice:");
			scanf("%d",&choice);

			printf("\nEnter the first number:");
			scanf("%d",&a);
			printf("Enter the second number:");
			scanf("%d",&b);
			
			multiplication(a,b);
			
			break;
		
		case 4:
				printf("Press 1 for +\n");
				printf("Press 2 for -\n");
				printf("Press 3 for *\n");
				printf("Press 4 for /\n");
				printf("Press 5 for %\n");
				printf("Press 0 for the exit\n");

			printf("\nEnter your Choice:");
			scanf("%d",&choice);

			printf("\nEnter the first number:");
			scanf("%d",&a);
			printf("Enter the second number:");
			scanf("%d",&b);
			
			division(a,b);
			
			break;
		
		case 5:
				printf("Press 1 for +\n");
				printf("Press 2 for -\n");
				printf("Press 3 for *\n");
				printf("Press 4 for /\n");
				printf("Press 5 for %\n");
				printf("Press 0 for the exit\n");

			printf("\nEnter your Choice:");
			scanf("%d",&choice);

			printf("\nEnter the first number:");
			scanf("%d",&a);
			printf("Enter the second number:");
			scanf("%d",&b);
			
			modual(a,b);
			
			break;
			
			case 0:
				printf("Thanks for connecting us...Visit again!!!");
				return 0;

		
			default:
					printf("Invalid value...");	
					return 0;
		}
	}while(choice!=0);
}
