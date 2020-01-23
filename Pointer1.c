#include<stdio.h>
int main()
{
	int x,*ptr;
	x=10;
	ptr=&x; //stores the address of x
	printf("Value: %d\n",x);
	printf("Value of pointer: %d\n",*ptr);
	x+=10;
	printf("Value: %d\n",x);
	printf("Value of pointer: %d\n",*ptr);
	return 0;
}
