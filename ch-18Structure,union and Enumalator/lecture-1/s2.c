#include<stdio.h>
#include<string.h>

struct Employee
{
	int emp_id;
	char emp_name[20];
	int emp_age;
	char emp_role[20];
	char emp_city[20];
	int emp_experience;
	char emp_company_name[20];
};

int main()
{
	struct Employee emp[100];
	int i,n;
	
	printf("Enter size:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{	
		printf("Enter Employee id:");
		scanf("%d",&emp[i].emp_id);
		printf("Enter Employee Name:");
		scanf("%s",emp[i].emp_name);
		printf("Enter Age :");
		scanf("%d",&emp[i].emp_age);
		printf("Enter Employee Role:");
		scanf("%s",emp[i].emp_role);
		printf("Enter Employee city:");
		scanf("%s",emp[i].emp_city);
		printf("Enter Employee experience:");
		scanf("%d",&emp[i].emp_experience);
		printf("Enter Employee company name:");
		scanf("%s",emp[i].emp_company_name);
	}
	for(i=0;i<n;i++)
	{
		printf("\nEmpolyee id:%d",emp[i].emp_id);
		printf("\nEmployee Name :");
		puts(emp[i].emp_name);
		printf("\nEmployee Age :%d",emp[i].emp_age);
		printf("\nEmployee Role :");
		puts(emp[i].emp_role);
		printf("\nEployee City :");
		puts(emp[i].emp_city);
		printf("\nEmployee experience :%d",emp[i].emp_experience);
		printf("\nEmployee company name :");
		puts(emp[i].emp_company_name);
	}
}
