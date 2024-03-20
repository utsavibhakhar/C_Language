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
	char stu_username1[20];
	int stu_password1[10];
};
void main()
{
	struct Student krishna,devangi,utsavi;
	int i;
	
	krishna.stu_id=1234;
	strcpy(krishna.stu_name,"abc");
	krishna.stu_age=18;
	strcpy(krishna.stu_course,"Account");
	strcpy(krishna.stu_city,"rajkot");	
	krishna.stu_standard=12;
	strcpy(krishna.stu_school,"MMS");
	strcpy(krishna.stu_username2,"krishna");
	krishna.stu_password2=123;
	
	printf("Enter username:");
	scanf("%s",stu_username);
	printf("Enter password");
	scanf("%d",&stu_password);
	
	if (strcmp(email, email2) == 0 && strcmp(password, password2) == 0)
	 {
        printf("Login successful!\n");
    } else 
	{
        printf("Incorrect email or password. Please try again.\n");
    }



	devangi.stu_id=4567;
	strcpy(devangi.stu_name,"xyz");
	devangi.stu_age=20;
	strcpy(devangi.stu_course,"State");
	strcpy(devangi.stu_city,"pune");	
	devangi.stu_standard=11;
	strcpy(devangi.stu_school,"Modi school");
	strcpy(devangi.stu_username,"devangi");
	devangi.stu_password=456;
	
	utsavi.stu_id=7895;
	strcpy(utsavi.stu_name,"mno");
	utsavi.stu_age=22;
	strcpy(utsavi.stu_course,"Maths");
	strcpy(utsavi.stu_city,"surat");	
	utsavi.stu_standard=10;
	strcpy(utsavi.stu_school,"Dhodakiya school");
	strcpy(utsavi.stu_username,"utsavi");
	utsavi.stu_password=789;
	
	printf("Enter username:");
	scanf("%s",stu_username);
	printf("Enter password:");
	scanf("%d",stu_password);
	strcmp(stu_username,stu_password);
	
	
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
