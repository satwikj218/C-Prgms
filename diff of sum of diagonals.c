#include<stdio.h>
#include<math.h>
int main()
{
	int r,i,j,sum1=0,sum2=0;
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
			if(i==j)
			{
				sum1+=a[i][j];
			}
			if(i==(r-j-1))
			{
				sum2+=a[i][j];
			}
		}
	}
	printf("%d",abs(sum2-sum1));
}
