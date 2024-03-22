#include<stdio.h>
struct laptopdetail()
{
	char company_name;
	int processer;
	float price;
}
void main()
{
	struct laptopdetail lap[n];
	 
	 int n,i;
	 printf("Enter number");
	 scanf("%d",&n);
	 
	 for(i=0;i<n;i++)
	 {
	 	printf("enter company name");
	 	scanf("%s",lap[i].company_name);
	 	printf("enter processer");
	 	scanf("%d",&lap[i].processer);
	 	printf("enter price");
	 	scanf("%f",&lap[i].price);
	 }
	
}
