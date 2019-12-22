#include<stdio.h>
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Add: %d\nSub: %d\nMul: %d\nDiv: %0.2f\nMod: %d\n",(a+b),(a-b),(a*b),(float)a/b,(a%b));
}
