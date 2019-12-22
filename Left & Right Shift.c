// Write a prgm to shift a number(6 digits) by four bits
// Left shift --> Multiply by 2
// Right Shift --> Divide by 2
#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d",&n);
	m = n<<4; // left shift
	printf("%d",m);
}
