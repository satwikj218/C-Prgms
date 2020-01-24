/*
Input:

8 5

Output:

8

16 17

24 25 26 27

32 33 34 35 36 37 38 39

40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55

*/

#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,i,j,k;
	scanf("%d%d",&n,&m);
	for(i=0;i<m;i++)
	{
		k=(i+1)*n;
		for(j=0;j<pow(2,i);j++)
		{
			printf("%d",k);
			k++;
		}
		printf("\n");
		k=0;
	}
}
