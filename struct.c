/*
-->Structures:- 	"struct" is keyword used to define the structure.
   	  			    Inside of the structure it can store different data types.
				    It can store "int, char, float, double and long"
				
--> Syntax:
struct <structName>
{
datatype member;
...............
};

-> Structure defination does not have any memory.
-> It requires the memory when the object or variable of structure is created.

--> Object of Structure:
1. Along with "struct" defination
e.g:- 
sruct demo{
int id;
}obj1;

2. By using struct tag (inside the main funtion)
e.g:
struct demo obj1;
*/

#include<stdio.h>
struct demo
{
	int id;
	char* name; // If we take it as an array it does not take the input as a string, so we use pointer (*) it becomes dynamic
	float marks;
};
int main()
{
	struct demo obj;
	obj.id=100; // Data Binding Operator
	// It Combines the data of two entities
	obj.name="Satwik";
	obj.marks=90.90;
	printf("%5d\n",obj.id); // Gives some space in the starting...the digits are printed in the last
	printf("%s\n",obj.name);
	printf("%.2f\n",obj.marks);
	return 0;
}
