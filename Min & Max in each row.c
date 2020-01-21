#include<stdio.h>
int main()
{
	int r,i,j,min,max;
	scanf("%d",&r);
	int a[r][r];
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		min=a[i][0];
		max=a[i][0];
		for(j=0;j<r;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
			if(a[i][j]<min)
			{
				min=a[i][j];
			}
		}
		printf("<%d,%d>",min,max);
	}
}
