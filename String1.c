// scanf("%s",x); --> To take string as an input without whitespaces
// scanf("%[^\n]s",x); --> To take string as an input with whitespaces
// gets() can also be used to take input as a string with whitespaces but it is not suppoerted by many compilers.

#include<stdio.h>
int main()
{
	char x[100];
	scanf("%[^\n]s",x);
	printf("%s",x);
	return 0;
}
