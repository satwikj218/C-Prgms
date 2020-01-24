/*
Input:-

5

Output:-

5 5 5 5 5 5 5 5 5 

5 4 4 4 4 4 4 4 5 

5 4 3 3 3 3 3 4 5 

5 4 3 2 2 2 3 4 5 

5 4 3 2 1 2 3 4 5 

5 4 3 2 2 2 3 4 5 

5 4 3 3 3 3 3 4 5 

5 4 4 4 4 4 4 4 5 

5 5 5 5 5 5 5 5 5
*/

#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=-(n-1);i<n;i++)
	{
		for(j=-(n-1);j<n;j++)
		{
			if(abs(i)>=abs(j))
				printf("%d",abs(i)+1);
			else if(abs(i)<abs(j))
				printf("%d",abs(j)+1);
		}
		printf("\n");
	}
	return 0;
}
