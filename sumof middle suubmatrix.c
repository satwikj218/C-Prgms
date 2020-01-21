#include<stdio.h>
int main()
{
	int r,i,j,sum=0;
	scanf("%d",&r);
	int a[r][r];
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if(i!=0&&i!=r-1&&j!=0&&j!=r-1)
			{
				sum+=a[i][j];
			}
		}
	}
	printf("%d",sum);
}
