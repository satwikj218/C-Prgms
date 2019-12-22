#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=60-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)   // 2*i-1 for odd *'s
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}
