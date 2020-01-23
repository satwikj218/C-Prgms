#include<stdio.h>
struct demo
{
	char name[100];
	int id;
	float marks;
}obj;
int main()
{
	printf("Enter the name: ");
	scanf("%s",&obj.name);
	printf("Enter the id: ");
	scanf("%d",&obj.id);
	printf("Enter the marks: ");
	scanf("%f",&obj.marks);
	printf("Name = %s\nID = %d\nMarks = %.2f",obj.name,obj.id,obj.marks);
}
