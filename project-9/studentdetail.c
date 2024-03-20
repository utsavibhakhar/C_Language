#include<stdio.h>
#include<string.h>
struct Student
{
	int rollno;
	char name[20];
	int chemistry;
	int mathematics;
	int physics;
	float per;
	int tot;
};
int main()
{
	struct Student stu[100];
	int i,n;
	float per=0;
	int tot=0;	
		printf("Enter details of Student:");
		scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		printf("Roll no =>");
		scanf("%d",&stu[i].rollno);
		printf("Name =>");
		scanf("%s",&stu[i].name);
		printf("Chemistry => ");
		scanf("%d",&stu[i].chemistry);
		printf("Mathematics =>");
		scanf("%d",&stu[i].mathematics);
		printf("Physics => ");
		scanf("%d",&stu[i].physics);
	}
	for(i=0;i<n;i++)
	{
		printf("\n\nRoll no=>%d",stu[i].rollno);
		printf("\nName=>");
		puts(stu[i].name);
		printf("Chemistry=>%d",stu[i].chemistry);
		printf("\nmathematics=>%d",stu[i].mathematics);
		printf("\nphysics=>%d",stu[i].physics);	
		tot=stu[i].chemistry+stu[i].mathematics+stu[i].physics;
		printf("\ntotal=>%d",tot);
		per=(tot/300.0)*100;
		printf("\npercentage=>%f",per);
	}
}
