#include<stdio.h>
int main()
{
	int n,i,j,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int m=i+1;
		for(j=0;j<=i;j++)
		{
			printf("%d ",m);
			m+=n-j-1;
		}
		printf("\n");
	}
}
