#include<stdio.h>

struct student
{
	double id;
	char name[20];
	int rollno;
	char section;
};
int main()
{
	struct student s;
	printf("Enter the id: ");
	scanf("%f", &s.id);
	printf("Enter the name: ");
	scanf("%[^\n]s",s.name);
	printf("Enter the rollno: ");
	scanf("%d", &s.rollno);
	printf("Enter the section: ");
	scanf("%s",s.section);
	
	printf("ID: %d",s.id);
	printf("Name: %s",s.name);
	printf("ROll NO: %d",s.rollno);
	printf("Section: %s", s.section);
	
	return 0;
	
}

