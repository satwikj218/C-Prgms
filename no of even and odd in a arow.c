#include<stdio.h>
int main()
{
	int r,i,j,count=0,count1=0;
	scanf("%d",&r);
	int a[r][r];
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<r;i++)
	{
		count=0;
		count1=0;
		for(j=0;j<r;j++)
		{
			if(a[i][j]%2==0)
			{
				count++;
			}
			else
			{
				count1++;
			}
		}
		printf("<%d,%d>\n",count,count1);
	}
}
