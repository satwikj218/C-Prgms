#include<stdio.h>
int main()
{
	int n,i,j,c=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",c);
			c+=2;
		}
		if(c%2==0)
			c=1;
		else
			c=2;
		printf("\n");
	}
}
