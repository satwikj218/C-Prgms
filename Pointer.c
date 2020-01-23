/*
Syntax:
Datatype *Variablename;
variablename= &anotherVariable
*/

#include<stdio.h>
int main()
{
	int x,*ptr,**ptr1;
	x=10;
	ptr=&x; //stores the address of x
	ptr1=&ptr; // Default pointer value is NULL
	printf("Value: %d\n",x);
	printf("Address: %u\n",&x);
	printf("Value of pointer: %d\n",*ptr);
	printf("Address of pointer: %u\n",&ptr);
	printf("Internal value of pointer: %d\n",ptr);
	printf("Value of pointer: %d\n",*ptr1);
	printf("Address of pointer: %u\n",&ptr1);
	printf("Internal value of pointer: %d\n",ptr1);
	return 0;
}
