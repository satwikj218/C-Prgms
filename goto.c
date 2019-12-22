// Write a prgm 
// Syntax --> goto label
#include<stdio.h>
int main()
{
	int i=0;
	X: i+=1;
	printf("%d\n",i);
	if(i<10)
		goto X;
	
}
