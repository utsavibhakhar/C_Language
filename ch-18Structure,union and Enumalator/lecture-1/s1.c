#include<stdio.h>

struct Student
{
	int stu_id;
	char stu_name[20];
	int stu_age;
	char stu_course[20];
	char stu_city[20];
	char stu_standard;
	char stu_school[20];
};
void main()
{
	struct Student abc[3];
	int i;
	
	abc[0].stu_id=1234;
	strcpy(abc[0].stu_name,"abc");
	abc[0].stu_age=18;
	strcpy(abc[0].stu_course,"Account");
	strcpy(abc[0].stu_city,"rajkot");	
	abc[0].stu_standard=12;
	strcpy(abc[0].stu_school,"MMS");
	
	abc[1].stu_id=4567;
	strcpy(abc[1].stu_name,"xyz");
	abc[1].stu_age=20;
	strcpy(abc[1].stu_course,"State");
	strcpy(abc[1].stu_city,"pune");	
	abc[1].stu_standard=11;
	strcpy(abc[1].stu_school,"Modi school");

	abc[2].stu_id=7895;
	strcpy(abc[2].stu_name,"mno");
	abc[2].stu_age=22;
	strcpy(abc[2].stu_course,"Maths");
	strcpy(abc[2].stu_city,"surat");	
	abc[2].stu_standard=10;
	strcpy(abc[2].stu_school,"Dhodakiya school");
	
	for(i=0;i<=2;i++)
	{
	printf("\nGRID :%d",abc[i].stu_id);
	printf("\nName :");
	puts(abc[i].stu_name);
	printf("\nAge :%d",abc[i].stu_age);
	printf("\nCourse :");
	puts(abc[i].stu_course);
	printf("\nCity :");
	puts(abc[i].stu_city);
	printf("\nStandard :%d",abc[i].stu_standard);
	printf("\nSchool :");
	puts(abc[i].stu_school);
	}
}
