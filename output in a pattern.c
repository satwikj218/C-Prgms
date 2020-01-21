#include<stdio.h>
int main()
{
	int r,c,i,j;
	scanf("%d%d",&r,&c);
	int a[r+1][c+1];
	for(i=1;i<=r;i++) //if i=0 & j=0
	{
		for(j=1;j<=c;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<=r+1;i++) // then i=-1;i<r & j=-1;j<c
	{
		for(j=0;j<=c+1;j++)
		{
			if(i==0||j==c+1||i==r+1||j==0) //and j==c & i==r
			{
				printf("* ");
			}
			else
			{
				printf("%d ",a[i][j]);
			}
		}
		printf("\n");
	}
}
