// Write a prgm max of three nos
#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c))
		printf("A");
	else if(b>c)
		printf("B");
	else
		printf("C");
}
