#include<stdio.h>
int main()
{
	int r,c,i,j;
	scanf("%d%d",&r,&c);
	int a[r+4][c+4];
	for(i=1;i<=r;i++) //if i=0 & j=0
	{
		for(j=1;j<=c;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<=r+3;i++) // then i=-1;i<r & j=-1;j<c
	{
		for(j=0;j<=c+3;j++)
		{
			if(i==0||j==c+3||i==r+3||j==0) //and j==c & i==r
			{
				printf("$ ");
			}
			else if(i==1||j==c+2||i==r+2||j==1)
			{
				printf("* ");
			}
			else
			{
				printf("%d ",a[i-1][j-1]);
			}
		}
		printf("\n");
	}
}
