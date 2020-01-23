#include<stdio.h>
struct demo
{
	char name[100];
	int id;
	float marks;
};
int main()
{
	struct demo obj;
	printf("Memory of char: %d\n",sizeof(obj.name));
	printf("Memory of int: %d\n",sizeof(obj.id));
	printf("Memory of float: %d\n",sizeof(obj.marks));
	printf("Memory of struct: %d",sizeof(obj));
	return 0;
}
