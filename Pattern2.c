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
