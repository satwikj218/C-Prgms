#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)   // 2*i-1 for odd *'s
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	for(i=n-1;i>0;i--)
	{
		for(j=1;j<=n-i;j++)
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
