/*
Input:-

4

Output:-

1

2*2

3*3*3

4*4*4*4

4*4*4*4

3*3*3

2*2

1

*/

#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j==i)
				printf("%d",i);
			else 
				printf("%d*",i);
		}
		printf("\n");
	}
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			if(j==i)
				printf("%d",i);
			else 
				printf("%d*",i);
		}
		printf("\n");
	}
}
