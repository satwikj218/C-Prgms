/*
Input:-

5

Output:-

1 

2 6 

3 7 10 

4 8 11 13 

5 9 12 14 15

*/

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
