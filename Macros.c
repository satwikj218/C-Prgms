#include<stdio.h>
#define square(x) x*x 
int main()
{
	int k;
	k=64 / square(4); // k = 64 / 4 * 4 --> 16 * 4 = 64 
	printf("%d",k);
}
