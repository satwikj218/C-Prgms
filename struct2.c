#include<stdio.h>
struct demo
{
	char name[100];
	int id;
	float marks;
};
int main()
{
	int n,i;
	struct demo obj[100];
	printf("Enter the record count: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the Name: ");
		scanf("%s",&obj[i].name);
		printf("\nEnter id: ");
		scanf("%d",&obj[i].id);
		printf("\nEnter marks: ");
		scanf("%f",&obj[i].marks);
	}
	for(i=0;i<n;i++)
	{
		printf("Name = %s\nID = %d\nMarks = %.2f\n",obj[i].name,obj[i].id,obj[i].marks);
	}
}
